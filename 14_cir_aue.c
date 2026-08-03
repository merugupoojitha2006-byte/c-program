#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue [MAX];
int front=-1,rear=-1;
void enqueue()
{
	int value;
	printf("enter value:");
	scanf("%d",&value);
	if((rear+1)%MAX==front)
	{
	  printf("queue is full\n");
	}
	else
	{
		if(front==-1)
		rear=(rear+1)%MAX;
		queue[rear]=value;
		printf("inserted: %d\n",value);
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("deleted:%d\n",queue[front]);
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front=(front+1)%MAX;
		}
	}
}
void display()
{
	if(front==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		int i=front;
		printf("queue elements:");
		while(1)
		{
			printf("%d",queue[i]);
			if(i==rear)
			break;
			i=(i+1)%MAX;
		}
		printf("\n");
	}
}
main()
{
	int choice,value;
	while(1)
	{
		printf("\n---queue menu---\n");
		printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
		printf("enter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:display();break;
			case 4:exit(0);
			default:printf("invalid choice");
		}
	}
}
