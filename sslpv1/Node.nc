
#include <lib6lowpan/ip.h>
interface Node
{

	command error_t setUA();

	command bool getUAState();

	command error_t setSA(char *service,char *scope,struct in6_addr *loc,uint16_t *port);

	command bool getSAState(char *service,char *scope,struct in6_addr *loc,uint16_t *port);
	


}
