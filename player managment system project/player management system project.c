#include <stdio.h>
#include <string.h>

struct Player
{
    int jerseyNo;
    char name[50];
    int runs;
    int wickets;
    int matches;
};

struct Player p[100];
int count = 0;

int main()
{
    int choice;

    do
    {
        printf("\n\n======== PLAYER MANAGEMENT SYSTEM ========");
        printf("\n1. Add Player");
        printf("\n2. Remove Player");
        printf("\n3. Search Player by Jersey Number");
        printf("\n4. Search Player by Name");
        printf("\n5. Update Player Data");
        printf("\n6. Display All Players");
        printf("\n7. Display Maximum Runs");
        printf("\n8. Display Minimum Runs");
        printf("\n9. Display Maximum Wickets");
        printf("\n10. Display Minimum Wickets");
        printf("\n11. Exit");

        printf("\n\nEnter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addPlayer();
                break;

            case 2:
                removePlayer();
                break;

            case 3:
                searchJersey();
                break;

            case 4:
                searchName();
                break;

            case 5:
                updatePlayer();
                break;

            case 6:
                displayAll();
                break;

            case 7:
                maxRuns();
                break;

            case 8:
                minRuns();
                break;

            case 9:
                maxWickets();
                break;

            case 10:
                minWickets();
                break;

            case 11:
                printf("\nThank you!\n");
                break;

            default:
                printf("\nInvalid choice!\n");
        }

    } while (choice != 11);

    return 0;
}
/* Add Player */
void addPlayer()
{
    printf("\nEnter Jersey Number");
    scanf("%d", &p[count].jerseyNo);

    printf("Enter Player Name");
    scanf(" %[^\n]", p[count].name);

    printf("Enter Runs");
    scanf("%d", &p[count].runs);

    printf("Enter Wickets: ");
    scanf("%d", &p[count].wickets);

    printf("Enter Matches Played: ");
    scanf("%d", &p[count].matches);

    count++;

    printf("\nPlayer added successfully!\n");
}

/* Display All Players */
void displayAll()
{
    int i;

    if (count == 0)
    {
        printf("\nNo players available.\n");
        return;
    }

    printf("\n========== ALL PLAYERS ==========\n");

    for (i = 0; i < count; i++)
    {
        printf("\nPlayer %d", i + 1);
        printf("\nJersey Number : %d", p[i].jerseyNo);
        printf("\nName          : %s", p[i].name);
        printf("\nRuns          : %d", p[i].runs);
        printf("\nWickets       : %d", p[i].wickets);
        printf("\nMatches       : %d\n", p[i].matches);
    }
}

/* Search by Jersey Number */
void searchJersey()
{
    int no, i, found = 0;

    printf("\nEnter Jersey Number: ");
    scanf("%d", &no);

    for (i = 0; i < count; i++)
    {
        if (p[i].jerseyNo == no)
        {
            printf("\nPlayer Found");
            printf("\nJersey Number : %d", p[i].jerseyNo);
            printf("\nName          : %s", p[i].name);
            printf("\nRuns          : %d", p[i].runs);
            printf("\nWickets       : %d", p[i].wickets);
            printf("\nMatches       : %d\n", p[i].matches);

            found = 1;
        }
    }

    if (found == 0)
        printf("\nPlayer not found.\n");
}

/* Search by Name */
void searchName()
{
    char name[50];
    int i, found = 0;

    printf("\nEnter Player Name: ");
    scanf(" %[^\n]", name);

    for (i = 0; i < count; i++)
    {
        if (strcmp(p[i].name, name) == 0)
        {
            printf("\nPlayer Found");
            printf("\nJersey Number : %d", p[i].jerseyNo);
            printf("\nName          : %s", p[i].name);
            printf("\nRuns          : %d", p[i].runs);
            printf("\nWickets       : %d", p[i].wickets);
            printf("\nMatches       : %d\n", p[i].matches);

            found = 1;
        }
    }

    if (found == 0)
        printf("\nPlayer not found.\n");
}

/* Update Player */
void updatePlayer()
{
    int no, i, found = 0;

    printf("\nEnter Jersey Number: ");
    scanf("%d", &no);

    for (i = 0; i < count; i++)
    {
        if (p[i].jerseyNo == no)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", p[i].name);

            printf("Enter New Runs: ");
            scanf("%d", &p[i].runs);

            printf("Enter New Wickets: ");
            scanf("%d", &p[i].wickets);

            printf("Enter New Matches: ");
            scanf("%d", &p[i].matches);

            printf("\nPlayer updated successfully!\n");

            found = 1;
        }
    }

    if (found == 0)
        printf("\nPlayer not found.\n");
}

/* Remove Player */
void removePlayer()
{
    int no, i, j, found = 0;

    printf("\nEnter Jersey Number: ");
    scanf("%d", &no);

    for (i = 0; i < count; i++)
    {
        if (p[i].jerseyNo == no)
        {
            for (j = i; j < count - 1; j++)
            {
                p[j] = p[j + 1];
            }

            count--;

            printf("\nPlayer removed successfully!\n");

            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("\nPlayer not found.\n");
}

/* Maximum Runs */
void maxRuns()
{
    int i, max = 0;

    if (count == 0)
    {
        printf("\nNo players available.\n");
        return;
    }

    for (i = 1; i < count; i++)
    {
        if (p[i].runs > p[max].runs)
            max = i;
    }

    printf("\nPlayer with Maximum Runs\n");
    printf("Name : %s\n", p[max].name);
    printf("Runs : %d\n", p[max].runs);
}

/* Minimum Runs */
void minRuns()
{
    int i, min = 0;

    if (count == 0)
    {
        printf("\nNo players available.\n");
        return;
    }

    for (i = 1; i < count; i++)
    {
        if (p[i].runs < p[min].runs)
            min = i;
    }

    printf("\nPlayer with Minimum Runs\n");
    printf("Name : %s\n", p[min].name);
    printf("Runs : %d\n", p[min].runs);
}

/* Maximum Wickets */
void maxWickets()
{
    int i, max = 0;

    if (count == 0)
    {
        printf("\nNo players available.\n");
        return;
    }

    for (i = 1; i < count; i++)
    {
        if (p[i].wickets > p[max].wickets)
            max = i;
    }

    printf("\nPlayer with Maximum Wickets\n");
    printf("Name : %s\n", p[max].name);
    printf("Wickets : %d\n", p[max].wickets);
}

/* Minimum Wickets */
void minWickets()
{
    int i, min = 0;

    if (count == 0)
    {
        printf("\nNo players available.\n");
        return;
    }

    for (i = 1; i < count; i++)
    {
        if (p[i].wickets < p[min].wickets)
            min = i;
    }

    printf("\nPlayer with Minimum Wickets\n");
    printf("Name : %s\n", p[min].name);
    printf("Wickets : %d\n", p[min].wickets);
}

