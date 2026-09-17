#include <stdio.h>

void main()
{
	
	int units, bill;
	
	printf("Enter unit");
	scanf("%d",&units);
	
	if (units <= 50)
	{
		bill = units * 30;
		
	}
	else if (units <= 150)
	{
		bill = units * 40;
	}
	else 
	{
		bill = units* 50;
	}
	
	printf("Electricity bill = %d Rs",bill);
	
}