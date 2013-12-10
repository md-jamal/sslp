
#include<stdio.h>
#include <string.h>
#define STORE_MAX_SEQUENCES 5	//Maximum amount of sequencese we can store
typedef struct {
	char service[16];
	char scope[16];
	int sequence_no;
}__attribute__((packed))sequencer;
sequencer available_sequences[STORE_MAX_SEQUENCES];
	int indexer=0;

/*This function returns the length of the string*/
	int stringlength(char *data)
	{
		int i;
		int count=0;
		for(i=0;*(data+i)!='\0';i++)
			count++;	
		return count;

	}
int seq_generator(char *service,char *scope)
{
	int i;
	//check whether already there is a sequence number for this combination
	for(i=0;i<STORE_MAX_SEQUENCES;i++)		
	{
		if(!memcmp(service,available_sequences[i].service,stringlength(service))&&
		   !memcmp(scope,available_sequences[i].scope,stringlength(available_sequences[i].scope)))
			return i;
	}
	//else the combination is not there we have to add the combination
	
	for(i=0;i<STORE_MAX_SEQUENCES;i++)
	{
		if(!stringlength(available_sequences[i].service))
		{
			break;
		}
	}
	if(i==STORE_MAX_SEQUENCES)	//we will overwrite the already existing entries
	{
		if(indexer==5)
		{
			i=indexer=0;
			 indexer++;
		}
		else
		{
			i=indexer;
			indexer++;				
		}
	}
	memcpy(available_sequences[i].service,service,stringlength(service));
	memcpy(available_sequences[i].scope,scope,stringlength(scope));
	available_sequences[i].sequence_no=i;	

}


int main()
{
	printf("\n the sequence number generated for service and the scope temp and cdac is %d",seq_generator("temp","cdac"));
	printf("\n the sequence number generated for service and the scope temp and local is %d",seq_generator("temp","local"));
	printf("\n the sequence number generated for service and the scope temp and local is %d",seq_generator("temp","local"));
	printf("\n the sequence number generated for service and the scope humidity and local is %d",seq_generator("humidity","local"));
	printf("\n the sequence number generated for service and the scope humidity and cdac is %d",seq_generator("humidity","cdac"));
	printf("\n the sequence number generated for service and the scope soil and local is %d",seq_generator("soil","local"));
	printf("\n the sequence number generated for service and the scope soil and cdac is %d",seq_generator("soil","cdac"));
	printf("\n the sequence number generated for service and the scope humidity and local is %d",seq_generator("humidity","local"));
printf("\n the sequence number generated for service and the scope humidity and no scope is %d",seq_generator("humidity",""));
printf("\n the sequence number generated for service and the scope soil and no scope is %d",seq_generator("soil",""));
printf("\n the sequence number generated for service and the scope temp and no scope is %d",seq_generator("temp",""));
}
