#include<stdio.h>

struct student
{
	char name[20];
	int marks[3]; //array within structure
	int id;
};

int main()
{
	struct student s1[2];
	printf("Enter student details: \n");
	for(int i = 0;i < 2;i++)
	{
		printf("student%d:\nname = ", i+1);
		scanf("%s", s1[i].name);
		for(int j = 0;j < 3;j++)
		{
			printf("marks[%d]: ", j+1);
			scanf("%d", &s1[i].marks[j]);
		}
		printf("id = ");
		scanf("%d", &s1[i].id);
	}
	printf("Student details: \n");
	for(int i = 0;i < 2;i++)
	{
		printf("student%d:\nname = %s ", i+1, s1[i].name);
		for(int j = 0;j < 3;j++)
		{
			printf("marks[%d]: %d ", j+1, s1[i].marks[j]);
		}
		printf("id = %d\n", s1[i].id);
	}
}
