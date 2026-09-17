#include <stdio.h>

void palindrome(int *num);

void main()
{
	int num;
	printf("Enter the number");
	scanf("%d", &num);
	
	palindrome(&num);
	
}

void palindrome(int *num)
{
	int temp, rev = 0, rem;
	
	temp = *num;
	
	while(*num != 0)
	{
		rem = *num % 10;
		rev = rev * 10 + rem;
		*num = *num / 10;
		
	}
	
	if(temp == rev)
	  
	  printf("palindrome");
	  
	else 
	       
	     printf("not palindrome");
	
	
}