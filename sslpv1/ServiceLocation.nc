
#include "sslp.h"
interface ServiceLocation
{


	command error_t send(char *service_type,char *scope);


	event void recv(struct in6_addr location,uint16_t port);

	command error_t getServices(char *scope);

	event void servicesPresent();

}
