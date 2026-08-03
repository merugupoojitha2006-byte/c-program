#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
 struct node *head=NULL;
 void display()
 {
 	struct node *temp=head;
 	if(head==NULL)
 	{
 		Printf("list is empty\n");
 		return;
	}
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
 }
 void insert_begin()
 {
 	struct node *newnode;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	printf("enter data:");
 	scanf("%d",&newnode->data);
 	newnode->next=head;
 	head=newnode;
 	display();
 }
 void insert_end()
 {
 	struct node *newnode,*temp;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	printf("enter data:");
 	scanf("%d",&newnode->data);
 	newnode->next=NULL;
 	while(temp->next!=NULL)
 	temp=temp->next;
 	temp->next=newnode;
 	display();
 }
 void insert_pos()
 {
 	struct node *newnode,*temp;
 	int pos,i;
 	printf("enter position:");
 	scanf("%d",&pos);
 	newnode=(struct node*)malloc(sizeof(struct node));
 	printf("enter data:");
 	scanf("%d",&newnode->data);
 	temp=head;
 	for(i=1;i<pos-1;i++)
 	 temp=temp->next;
 	 newnode->next=temp->next;
 	 temp->next=newnode;
 	 display();
 }
void deletion_begin()
{
	struct node *temp;
	temp=head;
	head=head->next;
	free(temp);
	display();
}
void deletion_end()
{
	struct node *temp, *prev;
	temp=head;
	while(temp->next!=NULL)
 	{
 	  prev=temp;
 	  temp=temp->next;	
	}
	prev->next=NULL;
	free(temp);
	display();
}
void deletion_pos()
{
	struct node *temp, *prev;
	int pos,i;
	printf("enter position:");
 	scanf("%d",&pos);
	temp=head;
	for(i=1;i<pos&&temp!=NULL;i++)
	{
		prev=temp;
 	  temp=temp->next;	
	}
	prev->next=temp->next;
	free(temp);
	display();
}
void search()
{
	struct node *temp;
	int key,pos=1,found=0;
	printf("enter element to search:");
	scanf("%d",&key);
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==key) 
		{
			printf("element found at position %d\n",pos);
			found=1;
			break;
		}
		temp=temp->next;	
		pos++;
	}
	if(found==0)
	printf("element not found\n");

}

main()
{
	struct node *newnode,*temp;
	int n,i;
	printf("enter number of nodes:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data for node %d:",i);
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head=NULL)
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
	int choice;
	while(1)
	{
		printf("\n---MENU---\n");
		printf("1.insert_begin\n2.insert_end\n3.insert_pos\n");
		printf("4.deletion_begin\n5.deletion_end\n6.deletion_pos\n");
		printf("7.search\n8.exit\n");
		printf("enter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:insert_begin();break;
			case 2:insert_end();break;
			case 3:insert_pos();break;
			case 4:deletion_begin();break;
			case 5:deletion_end();break;
			case 6:deletion_pos();break;
			case 7:search();break;
			case 8:exit(0);
			default:printf("Invalid choice\n");	
		}
	}
}

