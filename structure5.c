#include<stdio.h>

struct student
{
	char name[20];
	int id;
	int marks;
};

void display1(char name[], int id, int marks);
void display2(struct student s2);
void display3(struct student *s3);

int main()
{
	struct student s1 = {"abc", 34, 25};
	struct student s2 = {"xyz", 54, 21};
	struct student s3 = {"rak", 73, 24};
	display1(s1.name, s1.id, s1.marks);
	display2(s2);
	display3(&s3);
}

void display1(char name[], int id, int marks)
{
	printf("Name = %s,id = %d, marks = %d\n", name, id, marks);
}

void display2(struct student s2)
{
	printf("Name = %s,id = %d, marks = %d\n", s2.name, s2.id, s2.marks);
}

void display3(struct student *s3)
{
	printf("Name = %s,id = %d, marks = %d\n", s3->name, s3->id, s3->marks);
}
