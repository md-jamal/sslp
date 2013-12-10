

#include<stdio.h>
#include<stdbool.h>
char services_received[64];
bool sent=false;
/*This function returns the length of the string*/
int stringlength(char *data)
{
	int i;
	int count=0;
	for(i=0;*(data+i)!='\0';i++)
		count++;	
	return count;
}
void addServiceType(char *servicetype)
{
	if(!sent)
	{
		sent=true;
		memcpy(&services_received[stringlength(services_received)],servicetype,stringlength(servicetype));
	}	
	else
	{
		services_received[stringlength(services_received)]=',';	
		memcpy(&services_received[stringlength(services_received)],servicetype,stringlength(servicetype));
	}
}int main()
{
	
	addServiceType("temp,moisture");
	addServiceType("humidity,precipitate");
	
	printf("\n the service type received is %s",services_received);
}
