#include <stdio.h>

struct Employee
{
	int id;
	char name[20];
	int saraly;

};
void store(struct Employee );
void display(struct Employee )	;

void main()
{
	struct Employee e;
	
	store(&e);
	display(&e);

}

void store(struct Employee *e)
{

	printf("Enter id");
	scanf("%d",&e->id);
	
	printf("Enter name");
	scanf("%s",e->name);
	
	printf("Enter the saraly");
	scanf("%d",&e->saraly);
	
}

void display(struct Employee e)
{
	printf("\nid = %d",e.id);
	printf("\nname = %s",e.name);
	printf("\nsaraly = %d",e.saraly);
	
}