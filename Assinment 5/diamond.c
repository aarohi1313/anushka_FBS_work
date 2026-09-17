#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    // Upper half
    for(i = 1; i <= n; i++)
    {
        for(j = i; j < n; j++)
            printf(" ");

        for(j = 1; j <= 2*i-1; j++)
            printf("*");

        printf("\n");
    }

    // Lower half
    for(i = n-1; i >= 1; i--)
    {
        for(j = i; j < n; j++)
            printf(" ");

        for(j = 1; j <= 2*i-1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}