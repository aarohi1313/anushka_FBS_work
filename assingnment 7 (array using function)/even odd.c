#include <stdio.h>

void oddeven(int a[], int n);

int main()
{
    int a[10], n, i;

    printf("Enter size");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    oddeven(a, n);

    return 0;
}

void oddeven(int a[], int n)
{
    int i;

    printf("Even numbers: ");
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            printf("%d ", a[i]);
    }

    printf("\nOdd numbers: ");
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
            printf("%d ", a[i]);
    }
}

