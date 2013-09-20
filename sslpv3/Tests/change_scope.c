

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

int main()
{
	struct in6_addr ip;
	struct in6_addr ip1;
	addService("temp1","local",&ip,1234);
	addService("temp","local1",&ip1,32);
	addService("humidity","local1",&ip1,14);
	addService("temp2","local1",&ip1,1234);
	PrintServices();
	PrintServices();
	changeScope("temp","cdac");
	changeScope("humidity","loc");
	changeScope("temp2","cdac2");
	PrintServices();

}
