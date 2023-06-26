#include<stdio.h>
#include<string.h>

struct employee
{
	char name[20];
	int id;
	int rating;
	//char address[20] = "Mandya"; -> error
}emp1 = {"Rakshitha", 25, 4};

int main()
{
	struct employee emp2, emp3;
	strcpy(emp2.name, "Sindhu");
	scanf("%d %d", &emp2.id, &emp2.rating);
	emp3 = emp2;
	printf("Name\tid\trating\n");
	printf("%s\t%d\t%d\n", emp1.name, emp1.id, emp1.rating);
	printf("%s\t%d\t%d\n", emp3.name, emp3.id, emp3.rating);
}

