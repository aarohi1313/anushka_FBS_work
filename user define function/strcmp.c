#include <stdio.h>
#include <string.h>

int mystrcmp(char ,char);
void main()
{
	char str[10];
	char org[10];
	
	
	printf("Enter the string");
	gets(str);
	
	printf("Enter the string");
	gets(org);
	
	if (mystrcmp(str,org)== 0)
	 {
	 	
		 printf("string are equal");
	  } 
	 else 
	    printf("string are not equal"); 

}
int mystrcmp(char str[],char org[])
{
	int i = 0;
	 
	 while(str[i]!= NULL && org[i]!=NULL)
	 {
	   if(str[i]!= org[i]) 
	    return str[i] - org[i];
		i++;	
	 	
	 }
	
	return str[i] - org[i];
	
	
	
	
}