
#include "blip_printf.h"
#include <lib6lowpan/ip.h>
//#define LIB6LOWPAN_HC_VERSION 6
module TestC
{

	uses interface Boot;
  	uses interface SplitControl as SSLPControl;
 	uses interface Leds;	
	uses interface Node;
	uses interface ServiceLocation;
	uses interface UDP;
	uses interface IPAddress;
}



implementation
{

	struct in6_addr LinkLocal;
	char service[20];
	char scope[20];
	struct in6_addr ip;
	uint16_t port;
	uint16_t test_port=1234;
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
		//call Node.setSA("temp","local",&LinkLocal,&test_port);
		//call Node.setSA("humidity","local",&LinkLocal,&test_port);
		//call Node.setLBR();
		//call Node.setHost();
		call SSLPControl.start();
    	}

	event void SSLPControl.startDone(error_t error)
 	 {

		if(call Node.getUAState())
		{
			call UDP.bind(453);
			//call ServiceLocation.send("humidity","");
			call ServiceLocation.getServices("");
		}
		if(call Node.getSAState(service,scope,&ip,&port))
		{
			printf("\n the service set is %s",service);		
			printf("\n The scope set is %s",scope);
			printf("\nThe IP Set is:");
			printf_in6addr(&ip);
			printf("\n The port number set is %d",port);	
			printfflush();
			call UDP.bind(455);

		}
  	}

	event void SSLPControl.stopDone(error_t error)
 	{
  	}
	event void ServiceLocation.recv(struct in6_addr loc,uint16_t port_no){
		struct sockaddr_in6 dest;
		uint8_t null=0;
		memcpy(&dest.sin6_addr,&loc,sizeof(struct in6_addr));
		dest.sin6_port=htons(port_no);
		call UDP.sendto(&dest,&null,sizeof(null));

		
	}


	event void UDP.recvfrom(struct sockaddr_in6 *from, void *data, 
                             uint16_t len, struct ip6_metadata *meta) {
		
		if(call Node.getSAState(service,scope,&ip,&port))
		{
			uint8_t temp=24;
			call Leds.led2Toggle();
			call UDP.sendto(from,&temp,sizeof(temp));
		}

		if(call Node.getUAState())
			printf("\n data received is %d",*(uint8_t *)data);

	  }

	
	event void IPAddress.changed(bool valid)
	{

	}
	
	//you will get all the services seperated by ,
	event void ServiceLocation.servicesPresent(services_available *services,uint8_t count){
		uint8_t i;
		for(i=0;i<count;i++)
		{
			printf("\n The service is %s",(services+i)->service);
			printf("\n The Location of the service:");		
			printf_in6addr(&(services+i)->ip_address);
			printf("::%d",ntohs((services+i)->port_no));

		}	
		
	}

}
