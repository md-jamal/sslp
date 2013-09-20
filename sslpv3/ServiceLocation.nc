
#include "sslp.h"
interface ServiceLocation
{


	command error_t send(char *service_type,char *scope);


	event void recv(services_available *services,uint8_t count);

	command int findService(char *service,char *scope);

	/*command error_t getServices(char *scope);

	//you will get all the services present in the network separated by ,
	event void servicesPresent(services_available *services,uint8_t count);


	//commands for caching the service Location Entries
	command error_t addServiceEntry(struct in6_addr ip_address,char *service,uint16_t lifetime,uint16_t port,char *scope);


	command error_t deleteServiceEntry(uint8_t index);



	#ifdef PRINTFUART_ENABLED
	command error_t printServices();	
	#endif
*/

}
