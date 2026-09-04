#include <stdio.h>

struct Product
{
    char name[20];
    float price;
    int quantity;
};

void main()
{
    struct Product p[5];
    int n;

    printf("Enter Number of Products");
    scanf("%d", &n);

    store(p, n);
    display(p, n);
}

void store(struct Product p[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Product %d\n", i + 1);

        printf("Enter Product Name");
        scanf("%s", p[i].name);

        printf("Enter Price");
        scanf("%f", &p[i].price);

        printf("Enter Quantity");
        scanf("%d", &p[i].quantity);
    }
}

void display(struct Product p[], int n)
{
    int i;
    float total = 0;

    for(i = 0; i < n; i++)
    {
        printf("\nProduct = %s\n", p[i].name);
        printf("Price = %.2f\n", p[i].price);
        printf("Quantity = %d\n", p[i].quantity);

        total = total + (p[i].price * p[i].quantity);
    }

    printf("\nTotal Cost = %.2f\n", total);
}

