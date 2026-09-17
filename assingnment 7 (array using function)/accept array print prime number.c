#include <stdio.h>

void printprime(int a[], int n);

int main()
{
    int a[10], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printprime(a, n);

    return 0;
}

void printprime(int a[], int n)
{
    int i;

    printf("Prime numbers");

    for(i = 0; i < n; i++)
    {
        if(prime(a[i]))
            printf("%d ", a[i]);
    }
}
int prime(int num)
{
    int i;

    if(num < 2)
        return 0;

    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
            return 0;
    }

    return 1;
}
