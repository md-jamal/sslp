
#include "sslp.h"
interface ServiceLocation
{


	command error_t send(char *service_type,char *scope);


	event void recv(struct in6_addr location,uint16_t port);

	command error_t getServices(char *scope);

	//you will get all the services present in the network separated by ,
	event void servicesPresent(services_available *services,uint8_t count);

}
