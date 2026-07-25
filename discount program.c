#include <stdio.h>

int main()
{
	
    float price;
    char student;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Are you a student (y/n): ");
    scanf(" %c", &student);

    if(student == 'y')
    {
        if(price > 500)
            printf("Discount = 20%%");
        else
            printf("Discount = 10%%");
    }
    else
    {
    	
        if(price > 600)
            printf("Discount = 15%%");
        else
            printf("No Discount");
    }

    
}