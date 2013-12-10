

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
		printf("\n amount of data moved is %d",sizeof(services_available)*(MAX_SERVICE_ADVERTISE-index-1));
		return 0;
	}	
	printf("\n Index is %d",index);
	return 1;
}




int main()
{
	struct in6_addr ip;
	struct in6_addr ip1;
	addService("moisture","local",&ip,1234);
	addService("temp","local1",&ip1,32);
	addService("humidity","local1",&ip1,14);
	addService("temp1","local1",&ip1,1234);
	printf("\n Size of the structure is %d",sizeof(services_available));
	PrintServices();

	/*if(findService("temp")!=-1)
		printf("\n temp service is found");
	else
		printf("\n temp service is not found");
	if(findService("cdac")!=-1)
		printf("\n cdac service is found");
	else
		printf("\n cdac service is not found");

	if(findService("temp1")!=-1)
		printf("\n temp1 service is found");
	else
		printf("\n temp service is not found");*/
	
	if(delService("temp")==0)
		printf("\n temp service is  deleted");
	else
		printf("\n temp service is not deleted");
	PrintServices();
	/*if(delService("cdac")==0)
		printf("\n cdac service is  deleted");
	else
		printf("\n cdac service is not deleted");
	PrintServices();

	if(delService("humidity")==0)
		printf("\n humidity service is  deleted");
	else
		printf("\n humidity service is not deleted");

	PrintServices();*/
}
