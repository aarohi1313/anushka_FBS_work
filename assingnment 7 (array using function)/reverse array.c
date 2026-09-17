#include <stdio.h>

void reverse(int a[], int n);

void main()
{
    int a[10], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    reverse(a, n);

    printf("Reverse array: ");
    display(a, n);

    return 0;
}

void reverse(int a[], int n)
{
    int i, temp;

    for(i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

void display(int a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
}

