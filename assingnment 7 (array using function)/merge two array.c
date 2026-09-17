#include <stdio.h>

void main()
{
    int a[5], b[5], c[10];
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    merge(a, b, c, n1, n2);

    display(c, n1 + n2);

    return 0;
}

void merge(int a[], int b[], int c[], int n1, int n2)
{
    int i;

    for(i = 0; i < n1; i++)
        c[i] = a[i];

    for(i = 0; i < n2; i++)
        c[n1 + i] = b[i];
}

void display(int c[], int n)
{
    int i;

    printf("Merged array: ");

    for(i = 0; i < n; i++)
        printf("%d ", c[i]);
}

