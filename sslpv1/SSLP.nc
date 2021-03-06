#include "sslp.h"

module SSLP
{
	provides interface SplitControl;
	provides interface ServiceLocation;
	uses interface UDP as UDPSend;
	uses interface UDP as UDPReceive;
	uses interface Timer<TMilli> as Timer;
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
	char append[20]="service:";
	char servic[20],scop[20];	
	char global_service[20];
	char global_scope[20];
	uint32_t TIMER_PERIOD=CONFIG_RETRY;
	uint8_t stringlength(char *data)
	{
		uint8_t i;
		uint8_t count=0;
		for(i=0;*(data+i)!='\0';i++)
			count++;	
		return count;

	}

	command error_t SplitControl.start()
  	{
	
		running=TRUE;  
		call UDPSend.bind(441);
		call UDPReceive.bind(427);   
		call RadioControl.start();
		signal SplitControl.startDone(SUCCESS);  
		return SUCCESS;

  	}


 	command error_t SplitControl.stop()
 	{
 		running= FALSE;
 	}

	char * addService(char *serv)
	{

		memcpy(&append[stringlength("service:")],serv,stringlength(serv));
		//printf("\n The service is %s",append);
		return append;

	}

	void fillHeader(struct sslp_hdr *header,uint8_t type,uint16_t seq_no)
	{
		header->version=SSLP_VERSION;
		header->msgid=type;
		header->seq_no=sequenceno;	//TODO:sequence number concept has to be done

	}

	void filllocationentry(location_entry *service_entry)
	{
		service_entry->lifetime=0xffff;
		service_entry->lt=3;
		call IPAddress.getEUILLAddress(&service_entry->url.sin6_addr) ;
		service_entry->url.sin6_port=htons(455);
	}

	void fillServiceReply(struct service_reply_msg *reply)
	{
		reply->error_code=0;
		reply->location_entry_count=1;	
		filllocationentry(&reply->service_entry);
	}
	void sendsrvrply(service_request_msg *servicemsg,struct sockaddr_in6 *destination)
	{

		fillHeader(&reply_msg.sslp_header,SERVICE_REPLY,servicemsg->sslp_header.seq_no);
		fillServiceReply(&reply_msg);
		dest.sin6_port=htons(427);
		memcpy(&dest.sin6_addr,&destination->sin6_addr,sizeof(struct in6_addr));

		printf("\n sending to the address");
		printf_in6addr(&dest.sin6_addr);
		call UDPSend.sendto(&dest,&reply_msg,sizeof(reply_msg));

	}
	
	

	void fillServiceRequest(struct service_request_msg *service_msg,char *service,char *scope)
	{
		fillHeader(&service_msg->sslp_header,SERVICE_REQUEST,sequenceno);
		service_msg->AM=IP_ADDR;
		call IPAddress.getLLAddr(&service_msg->source_address.ip_address);
		service=addService(service);
		memcpy(&service_msg->service_type,service,stringlength(service));
		printf("\n The service type in fill is %s",service_msg->service_type);
		service_msg->length_service_type=stringlength(service);
		memcpy(&service_msg->scope,scope,stringlength(scope));
		service_msg->length_scope_list=stringlength(scope);
	}

	void sendsrvrqst(char *service,char *scope)
	{
	
		fillServiceRequest(&msg,service,scope);
		dest.sin6_port=htons(427);	//reserved destination port for slp messages
		inet_pton6("ff02::1",&dest.sin6_addr);
		
		call UDPSend.sendto(&dest,&msg,sizeof(msg));
		
		call Timer.startOneShot(TIMER_PERIOD);
		

	}

	command error_t ServiceLocation.send(char *service,char *scope)
	{
		if(call Node.getUAState())
		{
			sendsrvrqst(service,scope);
			memcpy(&global_service,service,stringlength(service));	
			memcpy(&global_scope,scope,stringlength(scope));
		}	
		return SUCCESS;
	}

	command error_t ServiceLocation.getServices(char *scope)
	{


	}


	event void UDPSend.recvfrom(struct sockaddr_in6 *from, void *data, 
                             uint16_t len, struct ip6_metadata *meta) {
		
	  }

	event void UDPReceive.recvfrom(struct sockaddr_in6 *from, void *data, 
                             uint16_t len, struct ip6_metadata *meta) {

		struct sslp_hdr *header=(struct sslp_hdr *)data;
	

		struct in6_addr ip;
		uint16_t port;	
		call Leds.led1Toggle();

		printf("\n checking the type of the message received");
		if(header->msgid==SERVICE_REQUEST)
		{
			service_request_msg *servicemsg=(service_request_msg *)data;
			printf("\n Service Request Message is received with port:%d",ntohs(from->sin6_port));
			if(call Node.getSAState(servic,scop,&ip,&port))
			{
				//printf("\n Iam SA and i should only process this message");
				//TODO::add scoping mechanism also afterwards
				if(servicemsg->length_service_type)
				{
					if(!memcmp(&servicemsg->service_type[stringlength("service:")],servic,
					stringlength(servic)))
					{	
						if(!servicemsg->length_scope_list||
						!memcmp(&servicemsg->scope,scop,stringlength(scop)))
						{
							printf("\n I have this service:%s",servic);
							sendsrvrply(servicemsg,from);
						}
						else
						{
							printf("as %s and %s scopes are not equal",scop,servicemsg->scope);
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

			//printf("\n the service_type received in the message is %s",servicemsg->service_type);
			//printf("\n the scope received in the message :%s",servicemsg->scope);
			
		}
		else if(header->msgid==SERVICE_REPLY)
		{

			service_reply_msg *service_reply=(service_reply_msg *)data;
			printf("\n Service Reply Message is received with port:%d",ntohs(from->sin6_port));
			printf("\n service reply is  received with service provider");
			//TODO:Make somewhat generic
			call Timer.stop();
			if(service_reply->service_entry.lt==3)
			{
				printf("\n IPAddress received is");
				printf_in6addr(&service_reply->service_entry.url.sin6_addr);
				printf("\n Port received is%d",ntohs(service_reply->service_entry.url.sin6_port));
				signal ServiceLocation.recv(service_reply->service_entry.url.sin6_addr,
				ntohs(service_reply->service_entry.url.sin6_port));
			}
			return;
		}
		else
		{
			printf("\n some other message is received");
			return;
		}
		
		
		
  	}

	event void Timer.fired()		//Section 6.3(RFC 2608)  Retransmissions of SLP Messages
	{
		if(TIMER_PERIOD*2>CONFIG_MC_MAX)
			TIMER_PERIOD=CONFIG_MC_MAX;
		else
			TIMER_PERIOD*=2;
		sendsrvrqst(global_service,global_scope);
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
  

	default event void ServiceLocation.recv(struct in6_addr loc,uint16_t port){}


	default event void ServiceLocation.servicesPresent(){}

}


