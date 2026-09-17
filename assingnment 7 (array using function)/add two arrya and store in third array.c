#include <stdio.h>

void add(int a[], int b[], int c[], int n);

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {10, 20, 30, 40, 50};
    int c[5];

    add(a, b, c, 5);

    display(c, 5);

    return 0;
}

void add(int a[], int b[], int c[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
}


void display(int c[], int n)
{
    int i;

    printf("Third array");

    for(i = 0; i < n; i++)
        printf("%d ", c[i]);
}

