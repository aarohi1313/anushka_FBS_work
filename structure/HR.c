#include <stdio.h>

struct HR
{
    int id;
    char name[20];
    float salary;
    float commission;
};
void main()
{
    struct HR h1;

    store(&h1);
    display(&h1);
}

void store(struct HR *h)
{
    printf("Enter ID");
    scanf("%d", &h->id);

    printf("Enter Name");
    scanf("%s", h->name);

    printf("Enter Salary");
    scanf("%f", &h->salary);

    printf("Enter Commission");
    scanf("%f", &h->commission);
}

void display(struct HR h)
{
    printf("\nHR Details\n");
    printf("ID = %d\n", h.id);
    printf("Name = %s\n", h.name);
    printf("Salary = %.2f\n", h.salary);
    printf("Commission = %.2f\n", h.commission);
}

