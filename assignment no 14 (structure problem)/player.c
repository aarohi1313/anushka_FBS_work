#include <stdio.h>

struct Player
{
    char name[20];
    int matches;
    int runs;
    int wickets;
};

void main()
{
    struct Player p[10];

    store(p);
    display(p);
    maximum(p);
}

void store(struct Player p[])
{
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("\nEnter details of Player %d\n", i + 1);

        printf("Enter Name");
        scanf("%s", p[i].name);

        printf("Enter Matches");
        scanf("%d", &p[i].matches);

        printf("Enter Runs");
        scanf("%d", &p[i].runs);

        printf("Enter Wickets");
        scanf("%d", &p[i].wickets);
    }
}

void display(struct Player p[])
{
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("Name = %s\n", p[i].name);
        printf("Matches = %d\n", p[i].matches);
        printf("Runs = %d\n", p[i].runs);
        printf("Wickets = %d\n", p[i].wickets);
    }
}

void maximum(struct Player p[])
{
    int i;
    int maxRuns = 0;
    int maxWickets = 0;
    int runPlayer = 0;
    int wicketPlayer = 0;

    for(i = 0; i < 10; i++)
    {
        if(p[i].runs > maxRuns)
        {
            maxRuns = p[i].runs;
            runPlayer = i;
        }

        if(p[i].wickets > maxWickets)
        {
            maxWickets = p[i].wickets;
            wicketPlayer = i;
        }
    }

    printf("\n--- Player with Maximum Runs ---\n");
    printf("Name = %s\n", p[runPlayer].name);
    printf("Runs = %d\n", p[runPlayer].runs);

    printf("\n--- Player with Maximum Wickets ---\n");
    printf("Name = %s\n", p[wicketPlayer].name);
    printf("Wickets = %d\n", p[wicketPlayer].wickets);
}

