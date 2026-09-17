#include <stdio.h>

void search(int a[] , int n , int num );

void main()
{
    int a[10], n, i, num;

    printf("Enter size");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter number to search");
    scanf("%d", &num);

    search(a, n, num);

    return 0;
}

void search(int a[], int n, int num)
{
    int i, found = 0;

    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
        {
            printf("Number found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Number not found");
}

