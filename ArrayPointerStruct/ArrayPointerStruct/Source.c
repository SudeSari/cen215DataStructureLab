#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct student
{
	int r_no;
	char name[20];
	char course[20];
	int fees;
};

struct student *ptr_stud[10];

int main()
{
	int i, n;
	printf("\n Enter the number of students : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		ptr_stud[i] = (struct student *)malloc(sizeof(struct student));
		printf("\n Enter the data for student %d ", i + 1);
		printf("\n ROLL NO.: ");
		scanf("%d", &ptr_stud[i]-> r_no);
		printf("\n NAME: ");
		scanf("%s", &ptr_stud[i]->name);
		printf("\n COURSE: ");
		scanf("%s", &ptr_stud[i]->course);
		printf("\n FEES: ");
		scanf("%d", &ptr_stud[i]-> fees);
	}
	printf("\n DETAILS OF STUDENTS");
	for (i = 0; i < n; i++)
	{
		printf("\n ROLL NO. = %d", ptr_stud[i]-> r_no);
		printf("\n NAME = %s", ptr_stud[i]-> name);
		printf("\n COURSE = %s", ptr_stud[i]-> course);
		printf("\n FEES = %d", ptr_stud[i]-> fees);
	}
	_getch();
	return 0;
}