#include <stdio.h>

void main()
{
	int n;
	
	printf("Enter number");
	scanf("%d",&n);
	
	if (n > 0)
	{	
		printf("number is positive");
	
	}
	else if (n < 0)
	{
		printf("number is negetive");
		
	}
	else
	{
		printf("number is zero");
		
	}
	
    return 0;	
	
}