#include <stdio.h>

int sum(int a[] , int n );//declaration
int main()
{
    int a[10], n, i;

    printf("Enter size");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Sum = %d", sum(a, n));

    return 0;
}
int sum(int a[], int n)
{
    int i, s = 0;

    for(i = 0; i < n; i++)
        s = s + a[i];

    return s;
}

