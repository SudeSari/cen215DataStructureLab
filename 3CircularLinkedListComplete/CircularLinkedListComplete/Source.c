#include<stdio.h>
#include<stdlib.h>

//QUEUE

typedef struct Node
{
	int data;
	struct Node *next;
}node;

node *front = NULL, *rear = NULL, *temp;

void create();
void del();
void display();

int main()
{
	int chc;
	do
	{
		printf("\nMenu\n\t 1 to create the element : ");
		printf("\n\t 2 to delete the element : ");
		printf("\n\t 3 to display the queue : ");
		printf("\n\t 4 to exit from main : ");
		printf("\nEnter your choice : ");
		scanf("%d", &chc);

		switch (chc)
		{
		case 1:
			create();
			break;

		case 2:
			del();
			break;

		case 3:
			display();
			break;

		case 4:
			return 1;

		default:
			printf("\nInvalid choice :");
		}
	} while (1);

	return 0;
}

void create()
{
	node *newnode = (node*)malloc(sizeof(node));
	printf("\nEnter the node value : ");
	scanf("%d", &newnode->data);
	newnode->next = NULL;
	if (rear == NULL)
		front = rear = newnode;
	else
	{
		rear->next = newnode;
		rear = newnode;
	}

	rear->next = front;
}

void del()
{
	if (front == NULL)
		printf("\nUnderflow :");
	else
	{
		temp = front;
		if (front == rear)
		{
			printf("\n%d", front->data);
			front = rear = NULL;
		}
		else
		{
			printf("\n%d", front->data);
			front = front->next;
			rear->next = front;
		}
		temp->next = NULL;
		free(temp);
	}
}

void display()
{
	if (front == NULL)
		printf("\nEmpty");
	else
	{
		printf("\n");
		for (temp = front; temp != rear; temp = temp->next)
			printf("\n%d\t address=%u \t next=%u\t", temp->data, temp, temp->next);
		printf("\n%d\t address=%u \t next=%u\t", temp->data, temp, temp->next);
	}
}