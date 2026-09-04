#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void main()
{
    struct Date d1;

    store(&d1);
    display(&d1);
}

void store(struct Date *d)
{
    printf("Enter Day");
    scanf("%d", &d->day);

    printf("Enter Month");
    scanf("%d", &d->month);

    printf("Enter Year");
    scanf("%d", &d->year);
}

void display(struct Date *d)
{
    printf("\nDate = %d/%d/%d\n",
           d->day, d->month, d->year);
}

