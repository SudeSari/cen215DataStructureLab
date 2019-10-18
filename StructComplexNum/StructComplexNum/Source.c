#include <stdio.h>
#include <conio.h>
int main()
{
	typedef struct complex
	{
		int real;
		int imag;
	}COMPLEX;
	COMPLEX c1, c2, sum_c, sub_c;
	int option;

	do
	{
		printf("\n ******** MAIN MENU *********");
		printf("\n 1. Read the complex numbers");
		printf("\n 2. Display the complex numbers");
		printf("\n 3. Add the complex numbers");
		printf("\n 4. Subtract the complex numbers");
		printf("\n 5. EXIT");
		printf("\n Enter your option : ");
		scanf_s("%d", &option);
		switch (option)
		{
		case 1:
			printf("\n Enter the real and imaginary parts of the first complex number : ");
			scanf_s("%d %d", &c1.real, &c1.imag);
			printf("\n Enter the real and imaginary parts of the second complex number : ");
			scanf_s("%d %d", &c2.real, &c2.imag);
			break;
		case 2:
			printf("\n The first complex number is : %d+%di",
				c1.real, c1.imag);
			printf("\n The second complex number is : %d+%di",
				c2.real, c2.imag);
			break;
		case 3:
			sum_c.real = c1.real + c2.real;
			sum_c.imag = c1.imag + c2.imag;
			printf("\n The sum of two complex numbers is : %d + %di", sum_c.real, sum_c.imag);
			break;
		case 4:
			sub_c.real = c1.real - c2.real;
			sub_c.imag = c1.imag - c2.imag;
			printf("\n The difference between two complex numbers is :%d + %di", sub_c.real, sub_c.imag);
			break;
		}
	} while (option != 5);
	
	return 0;
}