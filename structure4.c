#include<stdio.h>
#include <string.h>
struct employee
{
	char name[20];
	int id;
	int *rating;
};

int main()
{
	struct employee emp1, *emp2;
	emp2 = &emp1;
	strcpy(emp1.name, "xyz");
	emp1.id = 26;
	int rate = 4;
	emp1.rating = &rate;
	printf("Name = %s, id = %d, rating = %d\n", emp2->name, emp2->id, *emp2->rating);
}
