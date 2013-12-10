

#include<stdio.h>
#define MAX_SERVICE_ADVERTISE	3	//Maximum services the SA can advertise
#define FAIL 1
#define SUCCESS 0
typedef struct {

	char service[16];
	char scope[16];
	char url[48];
	int lifetime;

}__attribute__((packed))services_available;
services_available sa_services[MAX_SERVICE_ADVERTISE];
	char Services[40];
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


int addService(char *serv,char *scop,char *url,int lifetime)
{
	int index=allocindex();
	printf("\n The index allocated is %d",index);
	if(index==-1)
		return FAIL;
	else
	{
		memcpy(&sa_services[index].service,serv,stringlength(serv));
		memcpy(&sa_services[index].scope,scop,stringlength(scop));
		memcpy(&sa_services[index].url,url,stringlength(url));
		sa_services[index].lifetime=lifetime;
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

//This function return the services present in the system
char * getServices(char *scope,int len)
{
	int index=0;
	int i;
	for(i=0;i<service_count();i++)
	{
		if(!(memcmp(&sa_services[i].scope,scope,len)))
		{
			printf("\nscope %s is present adding the service:%s",scope,sa_services[i].service);
			memcpy(&Services[stringlength(Services)],sa_services[i].service,stringlength(sa_services[i].service));
			printf("\n after adding service:%s",Services);
			Services[stringlength(Services)]=',';
		}
		else
		{
			printf("\n scope %s is not present with scope %s",scope,sa_services[i].scope);
		}
	}

	Services[stringlength(Services)-1]='\0';
	printf("\n after service:%s",Services);
	return Services;
			
		

}

int main()
{
			addService("temp","cd","2000::6",32);
				addService("moisture","cac","2000::5",1234);
		addService("humidity","cdac","2000::6",32);



	printf("\n The count is %d",service_count());
	printf("\n services present:%s",getServices("desd",stringlength("desd")));

}
