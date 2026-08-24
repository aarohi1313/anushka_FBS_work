#include <stdio.h>
#include <string.h>

int mystrlen(char str[]);
void main()
{
	char str[10];
	
	printf("Enter string");
	gets(str);
	
	printf("length = %d",mystrlen(str));
	
}
int mystrlen(char str[])
{

	int i = 0;
	
	while (str[i]!= NULL)
	{
		
		i++;
		
	}
	
	return i;
	
}