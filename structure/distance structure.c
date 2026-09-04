#include <stdio.h>

struct Distance
{
    int feet;
    int inch;
};

void main()
{
    struct Distance d1;

    store(&d1);
    display(&d1);
}

void store(struct Distance *d)
{
    printf("Enter Feet");
    scanf("%d", &d->feet);

    printf("Enter Inch");
    scanf("%d", &d->inch);
}

void display(struct Distance *d)
{
    printf("\nDistance = %d Feet %d Inch\n",
           d->feet, d->inch);
}

