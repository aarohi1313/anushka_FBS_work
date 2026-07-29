#include <stdio.h>
int main()
{
    int num, choice;
    int rev = 0, rem, temp, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n1. Even or Odd");
    printf("\n2. Prime or Not");
    printf("\n3. Palindrome");
    printf("\n4. Positive, Negative or Zero");
    printf("\n5. Reverse Number");
    printf("\n6. Sum of Digits");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(num % 2 == 0)
                printf("Even Number");
            else
                printf("Odd Number");
            break;

        case 2:
            for(i = 2; i < num; i++)
            {
                if(num % i == 0)
                {
                    printf("Not Prime");
                    return 0;
                }
            }
            printf("Prime Number");
            break;

        case 3:
            temp = num;

            while(temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            if(rev == num)
                printf("Palindrome");
            else
                printf("Not Palindrome");
            break;

        case 4:
            if(num > 0)
                printf("Positive");
            else if(num < 0)
                printf("Negative");
            else
                printf("Zero");
            break;

        case 5:
            temp = num;

            while(temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            printf("Reverse = %d", rev);
            break;

        case 6:
            temp = num;

            while(temp > 0)
            {
                rem = temp % 10;
                sum = sum + rem;
                temp = temp / 10;
            }

            printf("Sum of Digits = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}