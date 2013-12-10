

#include<stdio.h>
#include<stdbool.h>
typedef struct {

	char service[16];
	char url[48];
	int lifetime;
	char scope[16];
}__attribute__((packed))services_available;
#define MAX_SERVICE_ADVERTISE	3	//Maximum services the SA can advertise
#define FAIL 1
#define SUCCESS 0
services_available sa_services[MAX_SERVICE_ADVERTISE];
/*This function returns the length of the string*/
int stringlength(char *data)
{
	int i;
	int count=0;
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

int addService(char *serv,char *scop,char *url,int lifetime)
{
	int index=allocindex();
	//printf("\n The index allocated is %d",index);
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


//Returns 0 when it is duplicate else returns 1 when it is  not duplicate or when no entry exists
int duplication(char *service,char *scope,char *url)
{
	int i;
	for(i=0;i<MAX_SERVICE_ADVERTISE&&sa_services[i].lifetime;i++)
	{
		if(!(memcmp(&sa_services[i].service,service,stringlength(sa_services[i].service)))&&
		    !(memcmp(&sa_services[i].scope,scope,stringlength(sa_services[i].scope))) &&
		   !(memcmp(&sa_services[i].url,url,stringlength(sa_services[i].url))))
		{
			printf("\n index is %d",i);
			return 0;
		}
	}
	return 1;
}


int main()
{
	addService("temp","cd","2000::6",32);
	//addService("moisture","cac","2000::5",1234);
	addService("humidity","cdac","2000::6",32);

	printf("\n value returned is %d",duplication("humidity","cdac","2000::6"));



}


