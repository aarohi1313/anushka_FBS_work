#include <stdio.h>

int main()
{
    int arr[10], n, i, j, flag;

    printf("Enter size of array");
    scanf("%d", &n);

    printf("Enter array elements\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers are");

    for(i = 0; i < n; i++)
    {
        if(arr[i] < 2)
            continue;

        flag = 1;

        for(j = 2; j < arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}