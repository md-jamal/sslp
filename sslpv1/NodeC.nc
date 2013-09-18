
module NodeC
{
	provides interface Node;

}

implementation
{	
	uint8_t SAstate,UAstate;
	char service[20],scope[20];
	struct in6_addr location;
	uint16_t port;
	uint8_t stringlength(char *data)
	{
		uint8_t i;
		uint8_t count=0;
		for(i=0;*(data+i)!='\0';i++)
			count++;	
		return count;

	}

	command error_t Node.setUA()
	{

		UAstate=TRUE;
		return SUCCESS;
	}

	command error_t Node.getUAState()
	{

		return UAstate;
	}


	command error_t Node.setSA(char *serv,char *scop,struct in6_addr *loc,uint16_t *port_no)
	{
		memcpy(&service,serv,stringlength(serv));
		//printf("\n the service set is %s",service);
		memcpy(&scope,scop,stringlength(scop));
		//printf("\n The scope set is %s",scope);
		memcpy(&location,loc,sizeof(struct in6_addr));
		//printf("\n The location set is ");
		//printf_in6addr(&location);
		memcpy(&port,port_no,sizeof(port_no));
		//printf("\n The port number set is %d",port);
		//printfflush();
		SAstate=TRUE;
		return SUCCESS;
	}

	command error_t Node.getSAState(char *serv,char *scop,struct in6_addr *loc,uint16_t *port_no)
	{
		memcpy(serv,&service,stringlength(service));
		//printf("\ngetSAState:the service is %s",serv);
		memcpy(scop,&scope,stringlength(scope));
		//printf("\n getSAState:The scope set is %s",scop);
		memcpy(loc,&location,sizeof(struct in6_addr));
		memcpy(port_no,&port,sizeof(port_no));
		return SAstate;
	}
	

	
	

	

}
