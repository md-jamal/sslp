
#include "blip_printf.h"
#include <lib6lowpan/ip.h>
//#define LIB6LOWPAN_HC_VERSION 6
module TestC
{

	uses interface Boot;
 	uses interface Leds;	
	uses interface Node;
	uses interface IPAddress;
	uses interface Timer<TMilli>;
	uses interface SplitControl;
	uses interface SplitControl as SSLPControl;
	uses interface UDP;	
	uses interface ServiceLocation;
}



implementation
{

	struct in6_addr LinkLocal;
	char service[20];
	char scope[20];
	struct in6_addr ip;
	uint16_t port;
	uint16_t test_port=1234;
	uint8_t count_services;
	uint8_t stringlength(char *data)
	{
		uint8_t i;
		uint8_t count=0;
		for(i=0;*(data+i)!='\0';i++)
			count++;	
		return count;
	}
	event void  Boot.booted()
	{
		call Node.setUA();
		call IPAddress.getEUILLAddress(&LinkLocal);
		call SplitControl.start();
		//call Node.setSA();
		
		call SSLPControl.start();
		call Timer.startPeriodic(2048);
    	}
	
	event void Timer.fired()
	{
		#ifdef PRINTFUART_ENABLED
			//call Node.printServices();
		#endif
		/*if(call Node.findService("moisture","cdac")==SUCCESS)	
			printf("\nService is advertised by Me");
		else
			printf("\n Service is not advertised by Me");

		if(call Node.removeService("temp")==SUCCESS)
			printf("\n humidity Service is removed");
		else
			printf("\n humidity Service cannot be removed");*/
		call Node.getServices();
		
		#ifdef PRINTFUART_ENABLED
			call Node.printServices();
		#endif		

	}

	event void SSLPControl.startDone(error_t error)
 	{
		/* If he is a SA he will add all the services he is advertising*/	
		if(call Node.getSAState())		
		{
			printf("\n Iam SA");
			call UDP.bind(1234);	//this is the port at which the SA is advertising his service
			call Node.addService("temp","cdac",&LinkLocal,1234);
			//call Node.addService("humidity","local",&LinkLocal,3412);
			//call Node.addService("moisture","cdac",&LinkLocal,4564);
		}
		/*If he is a UA he will request for the location of the service*/
		if(call Node.getUAState())
		{

			printf("\n Iam UA");
			call UDP.bind(1254);	
			call ServiceLocation.send("temp","cdac");
			//call ServiceLocation.send("humidity","cdac");
		}



  	}

	event void UDP.recvfrom(struct sockaddr_in6 *from, void *data, 
                             uint16_t len, struct ip6_metadata *meta) {
		
		//whenever he receives a message,he sends  a message with his service information
		if(call Node.getSAState())
		{
			uint8_t temp=24;
			call Leds.led2Toggle();
			call UDP.sendto(from,&temp,sizeof(temp));
		}

		if(call Node.getUAState())
		{
			call Leds.led2Toggle();
			printf("\n data received is %d",*(uint8_t *)data);
		}

	  }


	event void SSLPControl.stopDone(error_t error)
 	{
  	}
	event void IPAddress.changed(bool valid)
	{

	}
	
	 event void SplitControl.startDone(error_t error)
  	{
  	}
		
	 event void SplitControl.stopDone(error_t error)
  	{
  	}

	event void ServiceLocation.recv(services_available *services,uint8_t count){


	}

	event void Node.servicesAvailable(services_available *sa_service,uint8_t count)
	{	
		call Leds.led0Toggle();
		printf("\n the number of the services is %d\n",count);
		printfflush();
		if(count>0)
		{
			while(count)
			{
				if(stringlength(sa_service[count-1].service))
				{
					printf("%s\t\t",sa_service[count-1].service);
					printf_in6addr(&sa_service[count-1].ip_address);
					printf("\t\t\t%d",sa_service[count-1].port_no);
					printf("\t\t%s\n",sa_service[count-1].scope);
					count--;
				}
			}	
		}
	}
}
