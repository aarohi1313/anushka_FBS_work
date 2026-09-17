#include <stdio.h>

void minmax();

void main()
{
    int a[10], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    minmax(a, n);

    return 0;
}

void minmax(int a[], int n)
{
    int i, min, max;

    min = a[0];
    max = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];

        if(a[i] > max)
            max = a[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d", max);
}