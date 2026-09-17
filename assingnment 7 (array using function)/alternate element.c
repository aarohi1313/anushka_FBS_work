#include <stdio.h>

void alternate(int a[], int n);
int main()
{
    int a[10], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    alternate(a, n);

    return 0;
}


void alternate(int a[], int n)
{
    int i;

    printf("Alternate elements: ");

    for(i = 0; i < n; i = i + 2)
        printf("%d ", a[i]);
}

