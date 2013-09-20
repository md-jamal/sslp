#include "sslp.h"
#include <lib6lowpan/ip.h>
interface Node
{

	command error_t setUA();

	command bool getUAState();

	command error_t setSA();

	//add services to the services advertised by the SA
	command error_t addService(char *service,char *scope,struct in6_addr *loc,uint16_t port);


	//get the services advertised by the SA

	command error_t getServices();

	command bool getSAState();

	//remove the service present
	command error_t removeService(char *service);

	//change the scope of the existing service
	
	command error_t changeScope(char *service,char *new_scope);

	//check whether the service and scope exist or not if the scope is not defined then check whether only the service is present
	command error_t findService(char *service,char *scope);
	
	#ifdef PRINTFUART_ENABLED
		command error_t printServices();
	#endif

	event void servicesAvailable(services_available *services,uint8_t count);

}
