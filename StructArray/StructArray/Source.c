#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	struct student
	{
		int student_no;
		char name[80];
		int fees;
	};
	struct student stud[50];
	int n, i, num, new_rolno;
	int new_fees;
	char new_name[80];

	printf("\n Enter the number of students : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("\n Enter the student number : ");
		scanf("%d", &stud[i].student_no);
		
		printf("\n Enter the name : ");
		scanf("%s", &stud[i].name);
		
		printf("\n Enter the fees : ");
		scanf("%d", &stud[i].fees);
	}

	for (i = 0; i < n; i++)
	{
		printf("\n ********DETAILS OF STUDENT %d*******", i + 1);
		printf("\n student No. = %d", stud[i].student_no);
		printf("\n NAME = %s", stud[i].name);
		printf("\n FEES = %d", stud[i].fees);
	}
	printf("\n Enter the student number whose record has to be edited : ");
	scanf("%d", &num);
	num = num-1;
	
	printf("\n Enter the new student number : ");
	scanf("%d", &new_rolno);
	
	printf("\n Enter the new name : ");
	scanf("%s", &new_name);
	
	printf("\n Enter the new fees : ");
	scanf("%d", &new_fees);
	
	stud[num].student_no = new_rolno;
	strcpy(stud[num].name, new_name);
	stud[num].fees = new_fees;
	for (i = 0; i < n; i++)
	{
		printf("\n ********DETAILS OF STUDENT %d*******", i + 1);
		printf("\n student No. = %d", stud[i].student_no);
		printf("\n NAME = %s", stud[i].name);
		printf("\n FEES = %d", stud[i].fees);
	}
	_getch();
	return 0;
}