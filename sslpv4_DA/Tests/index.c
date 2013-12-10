

#include<stdio.h>

	
/*This function returns the length of the string*/
int stringlength(char *data)
{
	int i;
	int count=0;
	for(i=0;*(data+i)!='\0';i++)
		count++;	
	return count;
}
int findIndex(char *data,char ch)
	{
		
		int i;
		for(i=0;i<stringlength(data);i++)
		{
			if(data[i]==ch)	
				return i;

		}
		return -1;


	}

int main()
{


	char buffer[100],ch;
	printf("\n Enter any string");
	scanf("%s",buffer);
	printf("\n Enter the character of which u want to find the index");
	scanf(" %c",&ch);
	printf("\n character %c is present at %d",ch,findIndex(buffer,ch));


}
