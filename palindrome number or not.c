#include <stdio.h>
int main()
{
    int n, temp, rem, rev = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(rev == n)
        printf("Palindrome");
    else
        printf("Not Palindrome");

#include <stdio.h>

int main()
{
    int n, temp, rem, rev = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(rev == n)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
}