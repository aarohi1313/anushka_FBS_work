#include <stdio.h>

int main()
{
    int arr[5], brr[5], crr[5];
    int n, i;

    printf("Enter size of array");
    scanf("%d", &n);

    printf("Enter first array\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter second array\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &brr[i]);
    }

    // Add two arrays
    for(i = 0; i < n; i++)
    {
        crr[i] = arr[i] + brr[i];
    }

    printf("Third array (sum):\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", crr[i]);
    }

    return 0;
}