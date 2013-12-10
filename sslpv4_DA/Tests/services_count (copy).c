
#include<stdio.h>
#include <string.h>

struct in6_addr{

	int array[8];

};

typedef struct {

	char service[16];
	struct in6_addr ip_address;
	int port_no;
	int lifetime;
	char scope[16];
}__attribute__((packed))services_available;

#define MAX_SERVICE_ADVERTISE	3	//Maximum services the SA can advertise
#define FAIL 1
#define SUCCESS 0
services_available sa_services[MAX_SERVICE_ADVERTISE];


int count_services;
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

/*This function returns the length of the string*/
int stringlength(char *data)
{
	int i;
	int count=0;
	for(i=0;*(data+i)!='\0';i++)
		count++;	
	return count;
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

int PrintServices()
{
	int i;
	printf("\n Service \t\t Port Number\t\tscope\n");
	for(i=0;i<MAX_SERVICE_ADVERTISE;i++)
	{
		if(stringlength(sa_services[i].service))
		{
			printf("%s",sa_services[i].service);
			printf("\t\t\t%d",sa_services[i].port_no);
			printf("\t\t%s\n",sa_services[i].scope);
		}
	}
	return SUCCESS;

}


int addService(char *serv,char *scop,struct in6_addr *loc,int port_no)
{
	int index=allocindex();
	printf("\n The index allocated is %d",index);
	if(index==-1)
		return FAIL;
	else
	{
		memcpy(&sa_services[index].service,serv,stringlength(serv));
		memcpy(&sa_services[index].scope,scop,stringlength(scop));
		memcpy(&sa_services[index].ip_address,loc,sizeof(struct in6_addr));
		sa_services[index].port_no=port_no;
		return SUCCESS;
	}
}	

int service_count()
{
	int count=0,i;
	for(i=0;i<MAX_SERVICE_ADVERTISE;i++)
	{
		if(stringlength(sa_services[i].service))
			count++;
	}
	return count;
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
		printf("\n amount of data moved is %d",sizeof(services_available)*(MAX_SERVICE_ADVERTISE-index-1));
		return 0;
	}	
	printf("\n Index is %d",index);
	return 1;
}

services_available * get_services(int *services_count)
{
	*services_count=service_count();
	return &sa_services[0];


}

int main()
{
	struct in6_addr ip;
	struct in6_addr ip1;
	services_available *sa_service;
	addService("moisture","local",&ip,1234);
	addService("temp","local1",&ip1,32);
	addService("humidity","local1",&ip1,14);
	addService("temp2","local1",&ip1,1234);
	PrintServices();
	if(sa_service=get_services(&count_services))	
	{
		printf("\n the service count is %d\n",count_services);
		if(count_services>0)
		{
			while(count_services)
			{
				if(stringlength(sa_service[count_services-1].service))
				{
					printf("%s\t\t",sa_service[count_services-1].service);
					//printf_in6addr(&sa_service[count_services-1].ip_address);
					printf("\t\t\t%d",sa_service[count_services-1].port_no);
					printf("\t\t%s\n",sa_service[count_services-1].scope);
					count_services--;
				}
			}	
		}

	}


}
