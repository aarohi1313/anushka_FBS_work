#include <stdio.h>

int swap(int*a,int*b);

void main()
{
	int a = 10, b = 20;
	
	printf("Before swap a = %d b = %d",a,b);
	     swap (&a,&b);
	       
	
	printf("After swap a= %d b = %d",a,b);
	
}
int swap(int* a,int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}