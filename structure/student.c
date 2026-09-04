#include <stdio.h>

struct student
{
	int rollno;
	char name[20];
	int marks;

}student;
	
void main()
{
	struct student s;
	
	store(&s);
	display(&s);

}

void store(struct student *s)
{
	printf("Enter rollno");
	scanf("%d",&s->rollno);
	
	printf("Enter name");
	scanf("%s",s->name);
	
	printf("Enter the marks");
	scanf("%d",&s->marks);
	
}

void display(struct student s)
{
	printf("\nrollno = %d",s.rollno);
	printf("\nname = %s",s.name);
	printf("\nmarks = %d",s.marks);
	
}