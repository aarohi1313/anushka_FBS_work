#include <stdio.h>

struct SalesManager
{
    int id;
    char name[20];
    float salary;
    float incentive;
    int target;
};

void main()
{
    struct SalesManager s1;

    store(&s1);
    display(&s1);
}

void store(struct SalesManager *s)
{
    printf("Enter ID");
    scanf("%d", &s->id);

    printf("Enter Name");
    scanf("%s", s->name);

    printf("Enter Salary");
    scanf("%f", &s->salary);

    printf("Enter Incentive");
    scanf("%f", &s->incentive);

    printf("Enter Target");
    scanf("%d", &s->target);
}

void display(struct SalesManager s)
{
    printf("\nSales Manager Details\n");
    printf("ID = %d\n", s.id);
    printf("Name = %s\n", s.name);
    printf("Salary = %.2f\n", s.salary);
    printf("Incentive = %.2f\n", s.incentive);
    printf("Target = %d\n", s.target);
}

