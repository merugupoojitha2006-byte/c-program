#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;	
}
main()
{
	struct *newnode,*temp,*head=NULL;
	int n,i;
	printf("enter the number of nodes:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data of node %d",i);
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			head=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
}

