#include <stdio.h>

struct Time
{
    int hrs;
    int min;
    int sec;
};
void main()
{
    struct Time t1, t2, t3;
    int seconds;

    printf("Enter First Time\n");
    store(&t1);

    printf("\nEnter Second Time\n");
    store(&t2);

    add(&t1, &t2, &t3);

    printf("\nFirst Time = ");
    display(&t1);

    printf("Second Time = ");
    display(&t2);

    printf("\nAddition = ");
    display(&t3);

    seconds = convertSeconds(&t3);

    printf("\nAddition in Seconds = %d\n", seconds);
}

void store(struct Time *t)
{
    printf("Enter Hours");
    scanf("%d", &t->hrs);

    printf("Enter Minutes");
    scanf("%d", &t->min);

    printf("Enter Seconds");
    scanf("%d", &t->sec);
}

void display(struct Time *t)
{
    printf("%d Hours %d Minutes %d Seconds\n",
           t->hrs, t->min, t->sec);
}

void add(struct Time *t1, struct Time *t2, struct Time *t3)
{
    t3->sec = t1->sec + t2->sec;
    t3->min = t1->min + t2->min;
    t3->hrs = t1->hrs + t2->hrs;

    if(t3->sec >= 60)
    {
        t3->sec = t3->sec - 60;
        t3->min++;
    }

    if(t3->min >= 60)
    {
        t3->min = t3->min - 60;
        t3->hrs++;
    }
}

int convertSeconds(struct Time *t)
{
    int total;

    total = t->hrs * 3600;
    total = total + t->min * 60;
    total = total + t->sec;

    return total;
}

