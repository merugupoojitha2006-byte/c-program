#include<stdio.h>
#include<stdlib.h>
# define MAX.5
int queue(MAX);
int front = -1;rear = -1;
void enqueue()
{
	int value;
	printf("enter the value:");
	scanf("%d", &value);
	if((rear + 1) % MAX == front);
	{
		printf("queue is full\n");
	}
	else
	{
		if(front == -1)
		{
			front = 0;
		}
		rear = (rear + 1) % MAX;
		queue[rear] = value;
		printf("inserted : %d\n", value);
	}
}
void dequeue()
{
	if(front == -1)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("deleted : %d\n", queue[front]);
		if(front == rear)
		{
			front = rear = -1;
		}
		else
		{
			front = (front + 1) % MAX;
		}
		else
		{
			front = (front + 1) % MAX;
		}
	}
}
void display()
{
	if(front == -1)
	{
		printf("queue is empty\n");
	}
	else
	{
		int i = front;
		printf("queue elements :");
		while (1)
		{
			printf("queue elements :");
			if ( i == rear)
			    break;
			i = (i + 1) % MAX;
		}
		printf("\n");
	}
}
int choice, value;
while (1)
{
	printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
	printf("enter choice :");
	scanf("%d", &choice);
	{
		case 1: enqueue();  break;
		case 2: dequeue();  break;
		case 3: display();  break;
		case 4: exit(0);
		default : printf("invalid choice :");
	}
}
