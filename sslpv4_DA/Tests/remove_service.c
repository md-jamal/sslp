

#include<stdio.h>
#include<string.h>
/*This function returns the length of the string*/
int stringlength(char *data)
{
	int i;
	int count=0;
	for(i=0;*(data+i)!='\0';i++)
		count++;	
	return count;
}

//This function will remove the "service:" from the string passed

char *removeService(char *serv)
{
	
	printf("\nremoveService %s",serv);
	printf("\n stringlength:%d",stringlength(serv));
	printf("\n stringlength:%d",stringlength("service:"));
	return serv+stringlength("service:");
}


int main()
{

	printf("\n:%s",removeService("service:world"));




}
