#include <stdio.h>

void leapyear(int *year);

void main()
{
	int year;
	printf("Enter the year");
	scanf("%d", &year);
	
	leapyear(&year);

	
	
}
void leapyear(int *year)
{
	if(*year % 400 == 0 || *year % 4 == 0 &&(*year % 100 !=0))
      
	  printf("leap year");
	  
	else
	      	
	   printf("not a leap year");
	
	
	
	
}