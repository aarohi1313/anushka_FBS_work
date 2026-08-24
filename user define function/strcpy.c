#include <stdio.h>
#include <string.h>

void mystrcpy(char dest[],char src[]);
void main()
{
  char str[10];
  char org[10];
  
  printf("Enter the string");
  gets(str);
  
 mystrcpy(org,str);
	
 printf("%s",org);	

}
void mystrcpy(char dest[],char src[])
{
	int i = 0;
	
	while(src[i]!= NULL)
    {
    	
    	dest[i]=src[i];
    	i++;
    	
    	
     }
	dest[i]=NULL;
	
}