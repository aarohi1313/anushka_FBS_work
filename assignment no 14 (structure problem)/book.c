#include <stdio.h>

struct Book
{
    char name[30];
    int id;
    char author[30];
    int price;
};
void main()
{
    struct Book b1;

    store(&b1);
    display(&b1);
}

void store(struct Book *b)
{
    printf("Enter Book Name");
    scanf("%s", b->name);

    printf("\nEnter Book ID");
    scanf("%d", &b->id);

    printf("\nEnter Author Name");
    scanf("%s", b->author);

    printf("\nEnter Price");
    scanf("%d", &b->price);
}

void display(struct Book *b)
{
    printf("Book Name = %s\n", b->name);
    printf("Book ID = %d\n", b->id);
    printf("Author = %s\n", b->author);
    printf("Price = %d\n", b->price);
}

