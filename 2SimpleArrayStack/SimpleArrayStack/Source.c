#include <stdio.h>

int main()
{
	int arr[10], top = -1;
	int t = 10, c;

	do {
		//cout << "Enter the operation : \n 1.Add Elements \n 2.Remove Elements \n ";
		//cout << "3.Display Elements \n 4.Exit \n";
		printf("Operation: \n1.Add Elements \n2.Remove Elements \n3.Display Elements \n4.Exit \n");

		//cin >> c;
		scanf("%d", &c);

		switch (c)
		{
		case 1:
		{
			if (top >= 10)
			{
				//cout << "Stack Overflow\n";
				printf("Stack Overflow\n");
			}
			else
			{
				int z, x;
				//cout << "Enter number of elements to be pushed\n";
				printf("Enter number of elements to be pushed\n");
				//cin >> z;
				scanf("%d", &z);
				for (int i = 0; i < z; ++i)
				{
					//cout << "Enter element\n";
					printf("Enter element\n");
					//cin >> x;
					scanf("%d", &x);
					top++;
					arr[top] = x;
				}
			}
			break;
		}


		case 2: {
			if (top <= -1) {
				//cout << "Stack is Empty \n";
				printf("Stack is Empty \n");
			}
			else {
				//cout << "Popped Element is " << arr[top];
				printf("Popped Element is ", arr[top]);
				top--;
			}
			break;
		}

		case 3:
		{
			if (top >= 0)
			{
				//cout << "Elements are ";
				printf("Elements are ");
				for (int i = 0; i <= top;i++)
				{
					//cout << arr[i] << "-";
					printf("%d", arr[i], " - ");
				}

			}
			else
			{
				//cout << "Stack is Empty \n";
				printf("Stack is Empty \n");
			}
			break;
		}

		case 4:
		{
			//cout << "Thanks For Using \n";
			printf("Thanks For Using \n");
		}

		}

	} while (c != 4);
	return 0;
}
