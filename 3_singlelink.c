#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;	
}
main()
{
	struct node *newnode,*temp,*head=NULL;
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
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	printf("traversal of linked list:\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL");
	printf("\nsearching\n");
	int key,pos=1,found=0;
	printf("enter searching elements\n");
	scanf("%d",&key);
	temp=head;
	while(temp!=NULL)
	{
		if(key==temp->data)
		{
			printf("element is found in position %d\n",pos);
			found=1;
		}
		temp=temp->next;
		pos++;
	}
	if(found==0)
	    printf("elements is not found in list\n");
}

