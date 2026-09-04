#include <stdio.h>
#include <string.h>

struct Movie
{
    char title[30];
    char director[30];
    int year;
    char genre[20];
};

void main()
{
    struct Movie m[20];
    int n = 0;
    int choice;

    do
    {
        printf("\n===== MOVIE DATABASE =====\n");
        printf("1. Add Movie\n");
        printf("2. Display Movies\n");
        printf("3. Search Movie\n");
        printf("4. Update Movie\n");
        printf("5. Exit\n");

        printf("\nEnter Choice");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addMovie(m, &n);
                break;

            case 2:
                display(m, n);
                break;

            case 3:
                search(m, n);
                break;

            case 4:
                update(m, n);
                break;

            case 5:
                printf("\nProgram Ended.\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 5);
}

void addMovie(struct Movie m[], int *n)
{
    printf("\nEnter Movie Title");
    scanf("%s", m[*n].title);

    printf("Enter Director");
    scanf("%s", m[*n].director);

    printf("Enter Release Year");
    scanf("%d", &m[*n].year);

    printf("Enter Genre");
    scanf("%s", m[*n].genre);

    (*n)++;

    printf("\nMovie Added Successfully!\n");
}

void display(struct Movie m[], int n)
{
    int i;

    printf("\n--- Movie Database ---\n");

    for(i = 0; i < n; i++)
    {
        printf("\nMovie %d\n", i + 1);
        printf("Title = %s\n", m[i].title);
        printf("Director = %s\n", m[i].director);
        printf("Year = %d\n", m[i].year);
        printf("Genre = %s\n", m[i].genre);
    }
}

void search(struct Movie m[], int n)
{
    char title[30];
    int i, found = 0;

    printf("\nEnter Movie Title to Search");
    scanf("%s", title);

    for(i = 0; i < n; i++)
    {
    	
        if(strcmp(m[i].title, title) == 0)
        {
            printf("\nMovie Found!\n");
            printf("Title = %s\n", m[i].title);
            printf("Director = %s\n", m[i].director);
            printf("Year = %d\n", m[i].year);
            printf("Genre = %s\n", m[i].genre);

            found = 1;
      
	    }
    }

    if(found == 0)
    {
        printf("\nMovie Not Found!\n");
    }
}

void update(struct Movie m[], int n)
{
    char title[30];
    int i, found = 0;

    printf("\nEnter Movie Title to Update");
    scanf("%s", title);

    for(i = 0; i < n; i++)
    {
        if(strcmp(m[i].title, title) == 0)
        {
            printf("Enter New Director");
            scanf("%s", m[i].director);

            printf("Enter New Year");
            scanf("%d", &m[i].year);

            printf("Enter New Genre");
            scanf("%s", m[i].genre);

            printf("\nMovie Updated Successfully!\n");

            found = 1;
        }
    }

    if(found == 0)
    {
        printf("\nMovie Not Found!\n");
    }
}

