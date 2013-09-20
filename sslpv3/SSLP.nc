#include "sslp.h"

module SSLP
{
	provides interface SplitControl;
	provides interface ServiceLocation;


	uses interface SplitControl as RadioControl;		
	uses interface UDP as UDPSend;
	uses interface UDP as UDPReceive;
	uses interface Timer<TMilli> as RetransmitTimer;
	uses interface Timer<TMilli> as PrintTimer;
	uses interface Node;
	uses interface IPAddress;
	
}


implementation
{

	uint8_t running=FALSE;		//Indicates Whether the SSLP is On or OFF.ON=TRUE,OFF=FALSE
	services_available services[STORE_MAX_SERVICES];	//UA store the services information in this buffer

	char global_service[16],global_scope[16];	//these variables are mainly to be used at the retransmission.If u suppose send the message and u did not receive the message then we will use these variables
	uint8_t global_service_len,global_scope_len;
	service_request_msg sreq_msg;			//Service Request Message

	sequencer available_sequences[STORE_MAX_SEQUENCES];	//This structure stores the scope and service  for a particular sequence
	
	uint8_t indexer=0;		//This is used in sequencer logic to overwrite  if the array is full

	char append[20]="service:";	//This is Mainly For appending the Service to the service String

	struct sockaddr_in6 dest;	//Structure used for filling the UDP address(IP+Port)


	uint32_t TIMER_PERIOD=CONFIG_RETRY;	//this variable contains the period for the retransmit Timer
	uint8_t MSGSTATE;			//this variable defines what the message should be sent when the Timer fires

/*************************************Functions********************************************************************************/


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

	//this function checks whether the particular service and scope already exists in the cache or not if exist it returns the index else it returns -1
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

	//This function will just append the "service:" to the string passed

	char * addService(char *serv)
	{
		memcpy(&append[stringlength("service:")],serv,stringlength(serv));
		//printf("\n The service is %s",append);
		return append;

	}

	//This function will remove the "service:" from the string passed

	char *removeService(char *serv)
	{
		memcpy(serv,&serv[stringlength("service:")],8);
		return serv;
	}

	//This function is used to fill the header of the SSLP Messages
	void fillHeader(struct sslp_hdr *header,uint8_t type,uint16_t seq_no)
	{
		header->version=SSLP_VERSION;
		header->msgid=type;
		header->seq_no=seq_no;	
		printf("\n The sequence number sent is %d",seq_no);

	}


/****************************************SplitControl Implementation*************************************************************/

	command error_t SplitControl.start()
  	{
	
		running=TRUE;  
		call UDPSend.bind(SSLP_TRANSMIT_PORT);
		call UDPReceive.bind(SSLP_LISTENING_PORT);   	
		if(!(call Node.getSAState()||call Node.getUAState()))		//If user forgets to set any role by default set 											it to UA	
			call Node.setUA();
		call RadioControl.start();	
		#ifdef PRINTFUART_ENABLED
			call PrintTimer.startPeriodic(PRINTTIMER_PERIOD);
		#endif
		return SUCCESS;

  	}


 	command error_t SplitControl.stop()
 	{
		 running= FALSE;
		call RadioControl.stop();

 	}
	


/*****************************************Send Handlers*************************************************************************/

	//Handler to Send the Service Request Message
	void srvrqst_snd(char *service,uint8_t length_service,char *scope,uint8_t length_scope)
	{

		//Before Sending Lets Check whether any information already exists for this service and scope in the cache
		int index=call ServiceLocation.findService(service,scope);
		//suppose if the service Location already exist
		if(index!=-1)
		{
			//just move all the services on the top just like sort it with the services will have to do

		}
		else//no service information exist about that location has to send the service request message to get the info
		{
			//we will fill the header with the msg-id set to the SERVICE_REQUEST
			fillHeader(&sreq_msg.sslp_header,SERVICE_REQUEST,seq_generator(service,scope));
			
			//filling the message
			//first we will work with IP Address as the Addressing Mode we will implement the remaining later
			sreq_msg.AM=IP_ADDR;
			//setting the source address to the Link Local Address formed with EUI-64 
			call IPAddress.getEUILLAddress(&sreq_msg.source_address.ip_address);
			//adding the "service:" to the service string following the service template	
			service=addService(service);
			//copying the service and scope into the message
			memcpy(&sreq_msg.service_type,service,length_service+stringlength("service:"));
			sreq_msg.length_service_type=stringlength(service);
			memcpy(&sreq_msg.scope,scope,length_scope);
			sreq_msg.length_scope_list=stringlength(scope);

			//We will Fill the UDP Header(IP+Port)
			dest.sin6_port=htons(SSLP_LISTENING_PORT);	
			inet_pton6("ff02::1",&dest.sin6_addr);	//filling the destination address as all-nodes address
			//do we have to create a separate address for SA Nodes????

			call UDPSend.sendto(&dest,&sreq_msg,sizeof(sreq_msg));

			//If the message is not received we have to retransmit for that we will use the Timer
			call RetransmitTimer.startOneShot(TIMER_PERIOD);
		}
	}

	//Handler to send the Service Reply Message

	void srvrply_snd(service_request_msg *servicemsg,struct sockaddr_in6 *destination,uint16_t error)
	{


	}






/*****************************************Receive Handlers**********************************************************************/


	//Receive Handler for the service Request Message
	void srvrqst_rcv(struct sockaddr_in6 *from, void *data)
	{
		service_request_msg *servicemsg=(service_request_msg *)data;
		
		if(call Node.getSAState())
		{

			printf("\n Service Request Message is received with port:%d",ntohs(from->sin6_port));
			//check Whether You have the Service or not
			if(call Node.findService(removeService(servicemsg->service_type),servicemsg->scope)==SUCCESS)
			{
				printf("\ni will send the service reply with the location info ");				
				
				

			}
			else
			{
				printf("\n i dont have the service:%s",removeService(servicemsg->service_type));
				
			}
			
		}
		else
		{
			printf("\n Iam UA and i should not process this message");
			return;

		}
	}
	
	//Receive Handler for the Service Reply Message

	void srvrply_rcv(struct sockaddr_in6 *from, void *data)
	{



	}

	






/******************************************ServiceLocation Implementation******************************************************/

	//UA specifies the type of the service he want and the scope then we will signal him back with the service Location
	command error_t ServiceLocation.send(char *service,char *scope)
	{

		if(call Node.getUAState())		//Only UA should be able to send the service request message
		{
				
			//clearing the global varaibles to remove the old data and the service request message
			memset(&global_service,0,sizeof(global_service));
			memset(&global_scope,0,sizeof(global_scope));
			memset(&sreq_msg,0,sizeof(service_request_msg));

			//copying the data so that it can be used for retransmission
			memcpy(&global_service,service,stringlength(service));	
			memcpy(&global_scope,scope,stringlength(scope));

			global_service_len=stringlength(global_service);
			global_scope_len=stringlength(global_scope);
			MSGSTATE=SERVICE_REQUEST;
			srvrqst_snd(global_service,global_service_len,global_scope,global_scope_len);
			

			return SUCCESS;
		}
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



/********************************************EVENTS****************************************************************************/



	event void UDPSend.recvfrom(struct sockaddr_in6 *from, void *data, 
                             uint16_t len, struct ip6_metadata *meta) {
		
	  }

	event void UDPReceive.recvfrom(struct sockaddr_in6 *from, void *data, 
                             uint16_t len, struct ip6_metadata *meta) {


		struct sslp_hdr *header=(struct sslp_hdr *)data;
		printf("\n checking the type of the message received");
		if(header->msgid==SERVICE_REQUEST)
		{
			srvrqst_rcv(from,data);	
		}

	}
	

	event void RetransmitTimer.fired()		//Section6.3(RFC2608) Retransmission of SSLP Messages
	{
		if(TIMER_PERIOD*2>CONFIG_MC_MAX)
			TIMER_PERIOD=CONFIG_MC_MAX;
		else
			TIMER_PERIOD*=2;
		if(MSGSTATE==SERVICE_REQUEST){
			printf("\nTimerfired:global_service:%s",global_service);	
			srvrqst_snd(global_service,global_service_len,global_scope,global_scope_len);
		}

	}
	event void PrintTimer.fired()
	{
		/*uint8_t i;
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
		#endif*/
	}


	event void RadioControl.startDone(error_t e) {
		signal SplitControl.startDone(SUCCESS);  
        }

	event void RadioControl.stopDone(error_t e) {
		signal SplitControl.stopDone(SUCCESS);  
  	}

	event void Node.servicesAvailable(services_available *sa_service,uint8_t count)
	{

	}

	event void IPAddress.changed(bool valid)
	{

	}

/*************************************Default Events****************************************************************************/
	default event void SplitControl.startDone(error_t error)
  	{
  	}

	default  event void SplitControl.stopDone(error_t error)
  	{ 
  	}


	default event void ServiceLocation.recv(services_available *service,uint8_t count){}
  

}


