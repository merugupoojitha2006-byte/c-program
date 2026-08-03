//program on queues using arrays
#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX];
int front=-1,rear=-1;
void enqueue()
{
	int value;
	printf("enter value:");
	scanf("%d",&value);
	if(rear==MAX-1)
	{
		printf("queue is overflow\n");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear++;
		queue[rear]=value;
		printf("%d enqueued into queue\n",value);
	}
}
void dequeue()
{
	if(rear==-1||front>rear)
	{
		printf("queue is underflow\n");
	}
	else
	{
		printf("%d dequeued from queue\n",queue[front]);
		front++;
	}
}
void display()
{
	if(rear==-1||front>rear)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("queue elements are:\n");
		for(int i=front;i<=rear;i++)
		{
			printf("%d->",queue[i]);
		}
	}
}
main()
{
	int choice;
	while(1)
	{
		printf("\n---menu---\n");
		printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
		printf("enter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:enqueue(); break;
			case 2:dequeue(); break;
			case 3:display(); break;
			case 4:exit(0);
		}
	}
}
