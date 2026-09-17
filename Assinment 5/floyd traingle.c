#include <stdio.h>
void main()
{
	int rows , n, i ,j;
	
	printf("Enter the number of row");
	scanf("%d", &rows);
	
	for ( i = 1; i<=n; i++)
	{
		for ( j = 1; j<=i; j++)
		{
		
	      	printf("*");
		
		
      	}
           printf("\n");
		 
	}
	
	for ( i = n; i>=1; i--)
	{
		for ( j = 1; j<=i; j++)
		{
	      	printf("*");
	
			
		}
           printf("\n");
		 
	}	
	
	
	
}