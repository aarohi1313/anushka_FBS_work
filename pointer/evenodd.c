#include <stdio.h>

void evenodd(int *n); //declaration

void main()
{
	int n;
   printf("Enter the number");
	scanf(" %d", &n);
	evenodd(&n);
	
} // main end here

void evenodd(int *n)
{
	if( *n % 2 == 0)
	{
	
	  printf("even");
    }
	else
	     printf("odd");
	
}