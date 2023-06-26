#include<stdio.h>

struct student
{
	char name[20];
	int id;
	struct dob
	{
		int day;
		int month;
		int year;
	}date;
};

int main()
{
	struct student stu1 = {"xyz", 74, {30, 3, 1999}};
	struct dob dt2 = {5, 6, 2000};
	printf("Name = %s, id = %d, dob = %d/%d/%d\n", stu1.name, stu1.id, stu1.date.day, stu1.date.month, stu1.date.year);
	printf("dob of dt2 = %d/%d/%d\n", dt2.day, dt2.month, dt2.year);

}
