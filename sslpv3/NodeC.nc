
#include <AM.h>
module NodeC
{
	provides interface Node;

}

implementation
{	
	uint8_t SAstate=FALSE,UAstate=FALSE;
	services_available sa_services[MAX_SERVICE_ADVERTISE];	

	/*This function returns the length of the string*/
	uint8_t stringlength(char *data)
	{
		uint8_t i;
		uint8_t count=0;
		for(i=0;*(data+i)!='\0';i++)
			count++;	
		return count;

	}
	//function that returns the index
	int allocindex()
	{
		int index;
		for(index=0;index<MAX_SERVICE_ADVERTISE;index++)
		{
			if(!stringlength(sa_services[index].service))
			{
				break;
			}

		}
		if(index==MAX_SERVICE_ADVERTISE)
			return -1;
		return index;
	}
	//returns -1 when the service is not found in its list
	int findService(char *service)
	{	
		int index;
		for(index=0;index<MAX_SERVICE_ADVERTISE;index++)
		{
			if((stringlength(service)))
			{
			//If the string length is zero then there is problem.
				if(!memcmp(service,sa_services[index].service,stringlength(service)))
					return index;
			}
		}
		return -1;
	}

	
	//returns 0 when the service is deleted 1 when the service is not deleted 
	int delService(char *service)
	{
		int index;
		index=findService(service);	
		if(index!=-1)
		{
			printf("\n Index is %d",index);
			//memset(&sa_services[index],0,sizeof(services_available));
			memmove((void *)&sa_services[index],(void *)&sa_services[index+1],
			sizeof(services_available)*(MAX_SERVICE_ADVERTISE-index-1));
			//we are clearing the last entry as memmove will make the entry as garbage
			memset(&sa_services[MAX_SERVICE_ADVERTISE-1],0,sizeof(services_available));
			return 0;
		}	
		printf("\n Index is %d",index);
		return 1;
	}


	//returns -1 when the scope is changed else returns 0
	int changeScope(char *service,char *new_scope)
	{
	
		int index=findService(service);
		if(index==-1)
			return index;
		else
		{	
			//clear the already existing scope
			memset(sa_services[index].scope,0,sizeof(sa_services[index].scope));
			memcpy(sa_services[index].scope,new_scope,stringlength(new_scope));
			return 0;
		}

	}

	//Returns the count of the number of services present
	uint8_t service_count()
	{
		uint8_t count=0,i;
		for(i=0;i<MAX_SERVICE_ADVERTISE;i++)
		{
			if(stringlength(sa_services[i].service))
				count++;
		}
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


	command error_t Node.setSA()
	{
		
		SAstate=TRUE;
		return SUCCESS;
	}

	command error_t Node.getSAState()
	{
		return SAstate;
	}

	command error_t Node.addService(char *serv,char *scop,struct in6_addr *loc,uint16_t port_no)
	{
		int index=allocindex();
		if(index==-1)
			return FAIL;
		else
		{
			//TODO:Add the duplicate Mechanism Here
			memcpy(&sa_services[index].service,serv,stringlength(serv));
			memcpy(&sa_services[index].scope,scop,stringlength(scop));
			memcpy(&sa_services[index].ip_address,loc,sizeof(struct in6_addr));
			sa_services[index].port_no=port_no;
			//printf("\n Service Added Successfully");
			return SUCCESS;
		}
	}	
	
	//returns FAIL when the service is not present else return SUCCESS
	command error_t Node.findService(char *service,char *scope)
	{
		int index;
		if(call Node.getSAState())
		{
			//first check whether the service exists or not
			index=findService(service);
			if(index==-1)
				return FAIL;
			//if the service exist then check whether the scope matches with the already existing scope
			if(!memcmp(scope,sa_services[index].scope,stringlength(scope)))
				return SUCCESS;
		}
		//UA does not have any services
		return FAIL;
	}

	command error_t Node.removeService(char *service)
	{
		if(call Node.getSAState())
			if(delService(service)==0)
				return SUCCESS;
		return FAIL;

	}	

	command error_t Node.changeScope(char *service,char *new_scope)
	{
		if(call Node.getSAState())
			if(changeScope(service,new_scope)==0)			
				return SUCCESS;
		return FAIL;

	}

	command error_t Node.getServices()
	{
		if(call Node.getSAState())
		{
			signal Node.servicesAvailable(&sa_services[0],service_count());
		
		}	
		return FAIL;
	}	
	
	#ifdef PRINTFUART_ENABLED
	//if he is an SA he will print the services
	command error_t Node.printServices()
	{
		int i;
		if(call Node.getSAState())
		{	
			printf("\n Service \t\t IP_Address\t\tPort Number\t\tscope\n");
			for(i=0;i<MAX_SERVICE_ADVERTISE;i++)
			{
				if(stringlength(sa_services[i].service))
				{
					printf("%s\t\t",sa_services[i].service);
					printf_in6addr(&sa_services[i].ip_address);
					printf("\t\t\t%d",sa_services[i].port_no);
					printf("\t\t%s\n",sa_services[i].scope);
				}
			}
			return SUCCESS;
		}
		else	//UA dont have the services
			return FAIL;
	}
	
	#endif
}
