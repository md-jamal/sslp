#include "sslp.h"

module SSLP
{
	provides interface SplitControl;
	provides interface ServiceLocation;
	uses interface UDP as UDPSend;
	uses interface UDP as UDPReceive;
	uses interface Timer<TMilli> as Timer;
	uses interface Timer<TMilli> as SignalTimer;
	uses interface Timer<TMilli> as PrintTimer;
	uses interface SplitControl as RadioControl;
	uses interface Leds;
	uses interface IPAddress;
	uses interface Node;
	uses interface Ieee154Address;
}


implementation
{

	uint8_t running=FALSE;
	uint32_t sequenceno=0;
	struct sockaddr_in6 dest;
	struct in6_addr ip_test;
	service_request_msg msg;
	service_reply_msg reply_msg;
	strequest_msg servicetype_msg;
	streply_msg servtypereply_msg;
	char append[20]="service:";
	char servic[16],scop[16];	
	char global_service[16];
	char global_scope[16];
	uint8_t global_service_length,global_scope_length;
	uint32_t TIMER_PERIOD=CONFIG_RETRY;
	uint8_t MSGSTATE;
	services_available services[STORE_MAX_SERVICES];
	sequencer available_sequences[STORE_MAX_SEQUENCES];
	uint8_t SIGNAL_SENT=NO;
	uint8_t SERVICE_COUNT=0;
	struct in6_addr ip;
	uint16_t port;	
	uint8_t indexer=0;
	
	/*This function returns the length of the string*/
	uint8_t stringlength(char *data)
	{
		uint8_t i;
		uint8_t count=0;
		for(i=0;*(data+i)!='\0';i++)
			count++;	
		return count;

	}

	/*This function gives the unique sequence number for each SREQ.It will give only from 1 to 5 for now if u want u can 		increase*/
	uint8_t seq_generator(char *service,char *scope)
	{
		uint8_t i;
		//check whether already there is a sequence number for this combination

		for(i=0;i<STORE_MAX_SEQUENCES;i++)		
		{
			if(!memcmp(service,available_sequences[i].service,stringlength(service))&&
			   !memcmp(scope,available_sequences[i].scope,stringlength(scope)))
				return i;

		}

		//else the combination is not there we have to add the combination
		
		for(i=0;i<STORE_MAX_SEQUENCES;i++)
		{
			if(!stringlength(available_sequences[i].service))
			{
				break;
			}
		}
		if(i==STORE_MAX_SEQUENCES)	//we will overwrite the already existing entries
		{
			if(indexer==5)
			{
				i=indexer=0;
			}
			else
			{
				i=indexer;				
			}
			indexer++;
		}
		memcpy(available_sequences[i].service,service,stringlength(service));
		memcpy(available_sequences[i].scope,scope,stringlength(scope));
		available_sequences[i].sequence_no=i;	

		return i;
	}

	command error_t SplitControl.start()
  	{
	
		running=TRUE;  
		call UDPSend.bind(441);
		call UDPReceive.bind(427);   
		call RadioControl.start();	
		#ifdef PRINTFUART_ENABLED
			call PrintTimer.startPeriodic(PRINTTIMER_PERIOD);
		#endif
		signal SplitControl.startDone(SUCCESS);  
		return SUCCESS;

  	}


 	command error_t SplitControl.stop()
 	{
 		running= FALSE;
 	}

	int servicefinder(char *service,char *scope)
	{
		int i;
		printf("\n Looking for service:%s and Scope:%s",service,scope);
		for(i=0;i<STORE_MAX_SERVICES;i++)
		{
			if(!memcmp(service,services[i].service,stringlength(service))&&!memcmp(scope,services[i].scope,
			stringlength(scope)))
				return i;
		}
		printf("\n ServiceFinder returnd:%d",i);
		return -1;

	}

	int alloc_index()			//This is mainly to overwrite the data
	{
		int index=0;
		for(index=0;index<STORE_MAX_SERVICES;index++)
		{
			if(services[index].lifetime==0)
				break;
		}
		if(index>5)		
			index=-1;
		printf("\n Index allocated is %d",index);
		return index;
	}

	char * addService(char *serv)
	{
		memcpy(&append[stringlength("service:")],serv,stringlength(serv));
		//printf("\n The service is %s",append);
		return append;

	}

	//if it return -1 it means the ip and port in the cache are already present else they are not present

	int checkip_port(struct in6_addr ip_address,uint16_t port_no)	
	{
		uint8_t index;
		for(index=0;index<STORE_MAX_SERVICES;index++)
		{	
			if(!memcmp(&ip_address,&services[index].ip_address,sizeof(struct in6_addr))&&
			(port_no==services[index].port_no))
				return -1;
		}
		return 0;
	}

	void fillHeader(struct sslp_hdr *header,uint8_t type,uint16_t seq_no)
	{
		header->version=SSLP_VERSION;
		header->msgid=type;
		header->seq_no=seq_no;	//TODO:sequence number concept has to be done
		printf("\n The sequence number sent is %d",seq_no);

	}
	//TODO::make this generic only the SA node should fill this extra security should be maintained so that UA should not 			use this function
	void filllocationentry(location_entry *service_entry)
	{
		service_entry->lifetime=2*60;		//2 Minutes
		service_entry->lt=3;
		call IPAddress.getEUILLAddress(&service_entry->url.sin6_addr) ;
		service_entry->url.sin6_port=htons(455);
	}

	void fillServiceReply(struct service_reply_msg *reply)
	{
		reply->location_entry_count=1;	
		filllocationentry(&reply->service_entry);
	}

	void fillServiceTypeReply(streply_msg *servicemsg)
	{
		servicemsg->error_code=0;		//TODO::has to do error checking for sending error values
		filllocationentry(&servicemsg->service_entry);
		servicemsg->length_service_type=stringlength(servic);
		memcpy(servicemsg->service_type,servic,stringlength(servic));

	}
	void srvrply_send(service_request_msg *servicemsg,struct sockaddr_in6 *destination,uint16_t error)
	{

		fillHeader(&reply_msg.sslp_header,SERVICE_REPLY,servicemsg->sslp_header.seq_no);
		reply_msg.error_code=error;
		if(error==NO_ERROR)	//When there is no error then only fill the Location Entry as the scope and service field 						matches
			fillServiceReply(&reply_msg);
		dest.sin6_port=htons(427);
		memcpy(&dest.sin6_addr,&destination->sin6_addr,sizeof(struct in6_addr));

		printf("\n sending to the address");
		printf_in6addr(&dest.sin6_addr);
		call UDPSend.sendto(&dest,&reply_msg,sizeof(reply_msg));

	}
	
	
	void srvtyperply_recv(strequest_msg *replymsg,struct sockaddr_in6 *destination)	
	{		
		fillHeader(&servtypereply_msg.sslp_header,SERVICE_TYPE_REPLY,replymsg->sslp_header.seq_no);
		fillServiceTypeReply(&servtypereply_msg);
		dest.sin6_port=htons(427);		//all the service messages should be sent on the same port
		memcpy(&dest.sin6_addr,&destination->sin6_addr,sizeof(struct in6_addr));
		call UDPSend.sendto(&dest,&servtypereply_msg,sizeof(servtypereply_msg));
	}	

	void fillServiceRequest(struct service_request_msg *service_msg,char *service,uint8_t length_service,char *scope,uint8_t length_scope)
	{

		//first generate a sequence number for this request
		
		fillHeader(&service_msg->sslp_header,SERVICE_REQUEST,seq_generator(service,scope));
		service_msg->AM=IP_ADDR;
		call IPAddress.getLLAddr(&service_msg->source_address.ip_address);
		service=addService(service);
		memcpy(&service_msg->service_type,service,length_service+stringlength("service:"));
		printf("\n fillservicerequest:The service type in fill is %s",service_msg->service_type);
		service_msg->length_service_type=stringlength(service);
		printf("\n fill service request: The service type length is %d",service_msg->length_service_type);
		memcpy(&service_msg->scope,scope,length_scope);
		printf("\n fillservicerequest: the scope type is %s",service_msg->scope);
		service_msg->length_scope_list=stringlength(scope);
	}

	void srvrqst_send(char *service,uint8_t length_service,char *scope,uint8_t length_scope)
	{
	
		int index=call ServiceLocation.findService(service,scope);
		printf("\n SRVRQST_SEND:the service is %s",service);
		if(index==-1)//if no service found in the cache
		{
			fillServiceRequest(&msg,service,length_service,scope,length_scope);
			dest.sin6_port=htons(427);	//reserved destination port for slp messages
			inet_pton6("ff02::1",&dest.sin6_addr);	
			call UDPSend.sendto(&dest,&msg,sizeof(msg));
			MSGSTATE=SERVICE_REQUEST;
			call Timer.startOneShot(TIMER_PERIOD);			
		}
		else
		{
			//signal the servicelocation
			printf("\n Data already present in the cache");	
			signal ServiceLocation.recv(services[index].ip_address,services[index].port_no);
			
		}	

	}

	//Section 5.1(RFC 2608)In the absence of DAs,STREQ messages are broadcasted over 6LoWPAN and SA's respond with STREP 		messages
	void srvtyperqst_send(char *scope)
	{
		fillHeader(&servicetype_msg.sslp_header,SERVICE_TYPE_REQUEST,sequenceno);
		servicetype_msg.AM=IP_ADDR;
		call IPAddress.getLLAddr(&servicetype_msg.source_address.ip_address);
		servicetype_msg.length_scope_type=stringlength(scope);
		memcpy(&servicetype_msg.scope,scope,stringlength(scope));
		printf("\n The scope we are sending is %s ",servicetype_msg.scope);
		dest.sin6_port=htons(427);
		inet_pton6("ff02::1",&dest.sin6_addr);
		call UDPSend.sendto(&dest,&servicetype_msg,sizeof(servicetype_msg));
		MSGSTATE=SERVICE_TYPE_REQUEST;
		SIGNAL_SENT=NO;
		SERVICE_COUNT=0;
		memset(&services,0,sizeof(services_available)*STORE_MAX_SERVICES);
		memcpy(&global_scope,scope,stringlength(scope));
		call Timer.startOneShot(TIMER_PERIOD);
	}

	void srvrqst_rcv(struct sockaddr_in6 *from, void *data)
	{
		service_request_msg *servicemsg=(service_request_msg *)data;
		printf("\n Service Request Message is received with port:%d",ntohs(from->sin6_port));
		if(call Node.getSAState(servic,scop,&ip,&port))
		{
			//printf("\n Iam SA and i should only process this message");
			if(servicemsg->length_service_type)
			{
				if(!memcmp(&servicemsg->service_type[stringlength("service:")],servic,
				servicemsg->length_service_type-8))
				{	
					if(!servicemsg->length_scope_list||
					!memcmp(&servicemsg->scope,scop,servicemsg->length_scope_list))
					{
						printf("\n I have this service:%s",servic);
						srvrply_send(servicemsg,from,NO_ERROR);
					}
					else//SCOPE_ERROR should be send as the scope field did not match to the scope 						supported by SA
					{
						printf("as %s and %s scopes are not equal",scop,servicemsg->scope);
						srvrply_send(servicemsg,from,SCOPE_ERROR);
					}
				}
				else
				{
					printf("\n I dont have this service");
					printf("\nas %s and %s are not equal",servicemsg->service_type,servic);
					printfflush();
				}
			}
		}		
		else
		{
			printf("\n Iam UA and i should not process this message");
			return;
		}

	}

	void srvrply_rcv(struct sockaddr_in6 *from, void *data)
	{
		service_reply_msg *service_reply=(service_reply_msg *)data;
		printf("\n Service Reply Message is received with port:%d",ntohs(from->sin6_port));
		if(service_reply->error_code==NO_ERROR)
		{
			//TODO:Make somewhat generic
			/*As Service Reply Message is Received we stop the timer and We reset the TIMER Period to 					CONFIG_RETRY*/
			call Timer.stop();
			TIMER_PERIOD=CONFIG_RETRY;
			if(service_reply->service_entry.lt==3)
			{
				printf("\n IPAddress received is");
				printf_in6addr(&service_reply->service_entry.url.sin6_addr);
				printf("\n Port received is%d",ntohs(service_reply->service_entry.url.sin6_port));
				signal ServiceLocation.recv(service_reply->service_entry.url.sin6_addr,
				ntohs(service_reply->service_entry.url.sin6_port));
			//this is not correct ,but what should i do?? if user has called send("temp") and called 				send("humidity") and you receivd the data of the temp then this will fail.Change this based on the 				sequence number
				call ServiceLocation.addServiceEntry(service_reply->service_entry.url.sin6_addr,global_service,
				service_reply->service_entry.lifetime,ntohs(service_reply->service_entry.url.sin6_port),
				global_scope);
				#ifdef PRINTFUART_ENABLED
					call ServiceLocation.printServices();
				#endif
			}
		}
		else//Service Reply Message is received with error code
		{
			return;
		}

	}

	void srvtyperqst_rcv(struct sockaddr_in6 *from, void *data)
	{
		strequest_msg *service_typereq=(strequest_msg *)data;
		printf("\n Service Type Request is received ");
		if(call Node.getUAState())
		{
			printf("\n Iam UA and i should not process this message");
		}
		if(call Node.getSAState(servic,scop,&ip,&port))
		{
			printf("\n Iam SA and i can process this message");
			if(!service_typereq->length_scope_type||
			!memcmp(scop,&service_typereq->scope,service_typereq->length_scope_type))
			{
				printf("\n Will send service type reply messages");
				srvtyperply_recv(service_typereq,from);
			}
			else
			{
				printf("\n Iam not in his scope as my scope:%s and his scope:%s are not 				same",scop,service_typereq->scope);
			}
		}
	}

	void srvtyperply_rcv(struct sockaddr_in6 *from, void *data)
	{

		streply_msg *service_repmsg=(streply_msg *)data;
		printf("\n Service Type Reply Message is received");
		if(call Node.getSAState(servic,scop,&ip,&port))
		{
			printf("\n Iam SA and i cannot process this message");
		}
		else
		{		
			TIMER_PERIOD=CONFIG_RETRY;
			call Timer.stop();
			printf("\n IAM UA and i will process this message");
			if(service_repmsg->length_service_type)
					printf("\n Service received :%s",service_repmsg->service_type);
			if(SIGNAL_SENT==NO)//if after sending the services some service is received 									discard it
			{
				call SignalTimer.startOneShot(WAIT_PERIOD_SREPLY); 							memcpy(&services[alloc_index()].service,&service_repmsg->service_type,
					service_repmsg->length_service_type);
				if(alloc_index()!=-1)
				{
					printf("\n Copying the service");
					memcpy(&services[alloc_index()].ip_address,&service_repmsg->service_entry.url.sin6_addr,
					sizeof(struct in6_addr));
					memcpy(&services[alloc_index()].port_no,&service_repmsg->service_entry.url.sin6_port,
					sizeof(uint16_t));
					memcpy(&services[alloc_index()].lifetime,&service_repmsg->service_entry.lifetime,
					sizeof(uint16_t));
					SERVICE_COUNT++;
				}
				else
					printf("\n Cannot store as the buffer is full");
			}
		}
	}

/***********************Implementation of the ServiceLocation Interface**********************************************************/
	command error_t ServiceLocation.send(char *service,char *scope)
	{


		if(call Node.getUAState())
		{
			memset(&global_service,0,sizeof(global_service));
			memset(&msg,0,sizeof(service_request_msg));
			
			printf("\n SERVICELOCATION:the service is %s",global_service);
			printf("\n The sizeof global service is %d",sizeof(global_service));
			memset(&global_scope,0,sizeof(global_scope));
			memcpy(&global_service,service,stringlength(service));	
			printf("\n SERVICELOCATION:the service is %s",global_service);
			printf("\n SERVICELOCATION: the service length is %d",stringlength(global_service));
			memcpy(&global_scope,scope,stringlength(scope));
			global_service_length=stringlength(global_service);
			global_scope_length=stringlength(global_scope);
			srvrqst_send(global_service,global_service_length,global_scope,global_scope_length);
			printfflush();
		}	
		return SUCCESS;
	}

	command error_t ServiceLocation.getServices(char *scope)
	{
		/*we have to send the service type request messages asking for all the services*/
		
		srvtyperqst_send(scope);
		
		return SUCCESS;
	}
	//Each device will advertise only one service in one port
	command error_t ServiceLocation.addServiceEntry(struct in6_addr ip_address,char *service,uint16_t lifetime,uint16_t port_no,char *scope)
	{
		int index;
		//find whether the ip address and port number already exists
		if(checkip_port(ip_address,port_no)==-1)
		{
			printf("\n Duplicate Address Detected");
			return FAIL;		
		}
		index=alloc_index();
		if(index!=-1)
		{
			//memcpy(&services[index],services,sizeof(services_available));
			services[index].port_no=port_no;	//TODO::change this naming very confusing
			services[index].lifetime=lifetime;
			memcpy(&services[index].ip_address,&ip_address,sizeof(struct in6_addr));
			memcpy(&services[index].service,service,stringlength(service));
			memcpy(&services[index].scope,scope,stringlength(scope));
			printf("\n Successfully added the service");
			printf("\nport received to add:%d",services[0].port_no);
			return SUCCESS;
		}
		else
			return FAIL;
	}

	command error_t ServiceLocation.deleteServiceEntry(uint8_t index)
	{
		if(index<5)
		{
			memset(&services[index],0,sizeof(services_available));
			return SUCCESS;		
		}	
		else
			return FAIL;
	}

	//return -1 when no service and scope are matching,else returns the index where the service is present
	command int ServiceLocation.findService(char *service,char *scope)
	{
		int index=servicefinder(service,scope);
		if(index!=-1)
		{
			return index;
		}
		else
			return -1;
	

	}


	#ifdef PRINTFUART_ENABLED
	command error_t ServiceLocation.printServices()
	{
		uint8_t i;
		printf("\n Service \t\t\t Lifetime \t\t\t IP_Address\t\t\t Port Number\t\tscope\n");
		for(i=0;i<STORE_MAX_SERVICES;i++)
		{
			if(services[i].lifetime)
			{
				printf("%s",services[i].service);
				printf("\t\t\t%d",services[i].lifetime);
				printf("\t\t\t");
				printf_in6addr(&services[i].ip_address);
				printf("\t\t\t%d",services[i].port_no);
				printf("\t\t%s\n",services[i].scope);
			}
		}
		return SUCCESS;
	}

	
	#endif
	event void UDPSend.recvfrom(struct sockaddr_in6 *from, void *data, 
                             uint16_t len, struct ip6_metadata *meta) {
		
	  }

	event void UDPReceive.recvfrom(struct sockaddr_in6 *from, void *data, 
                             uint16_t len, struct ip6_metadata *meta) {

		struct sslp_hdr *header=(struct sslp_hdr *)data;
	

		
		call Leds.led1Toggle();

		printf("\n checking the type of the message received");
		if(header->msgid==SERVICE_REQUEST)
		{
			srvrqst_rcv(from,data);	
		}
		else if(header->msgid==SERVICE_REPLY)
		{
			srvrply_rcv(from,data);			
		}
		else if(header->msgid==SERVICE_TYPE_REQUEST)
		{
			srvtyperqst_rcv(from,data);
		}
		else if(header->msgid==SERVICE_TYPE_REPLY)
		{
			srvtyperply_rcv(from,data);			
		}
		else 
		{
			printf("\n some other message is received");			
		}
		printfflush();
		
		
  	}
/*********************************************Timer Events***********************************************************************/
	event void Timer.fired()		//Section 6.3(RFC 2608)  Retransmissions of SLP Messages
	{
		if(TIMER_PERIOD*2>CONFIG_MC_MAX)
			TIMER_PERIOD=CONFIG_MC_MAX;
		else
			TIMER_PERIOD*=2;
		if(MSGSTATE==SERVICE_REQUEST){
			printf("\nTimerfired:global_service:%s",global_service);	
			srvrqst_send(global_service,global_service_length,global_scope,global_scope_length);
		}
		else if(MSGSTATE==SERVICE_TYPE_REQUEST)
			srvtyperqst_send(global_scope);


	}

	event void SignalTimer.fired()
	{
		SIGNAL_SENT=YES;
		printf("\n Signalling the UA with the service Count:%d",SERVICE_COUNT);
		signal ServiceLocation.servicesPresent(services,SERVICE_COUNT);
	}

	event void PrintTimer.fired()
	{
		uint8_t i;
		for(i=0;i<STORE_MAX_SERVICES;i++)
		{
			if(services[i].lifetime)	//lifetime is in SECONDS
			{
				services[i].lifetime -= PRINTTIMER_PERIOD/1000;
				if(services[i].lifetime<=PRINTTIMER_PERIOD/1000)	
					call ServiceLocation.deleteServiceEntry(i);
			}

		}
		#ifdef PRINTFUART_ENABLED
			call ServiceLocation.printServices();
		#endif
	}

	event void RadioControl.startDone(error_t e) {
        }

	event void RadioControl.stopDone(error_t e) {

  	}

	event void IPAddress.changed(bool valid)
	{

	}
	
	event void Ieee154Address.changed()
	{

	}


	default event void SplitControl.startDone(error_t error)
  	{
  	}

	default  event void SplitControl.stopDone(error_t error)
  	{ 
  	}
  

	default event void ServiceLocation.recv(struct in6_addr loc,uint16_t port_num){}


	default event void ServiceLocation.servicesPresent(services_available *services_availab,uint8_t count){}

}


