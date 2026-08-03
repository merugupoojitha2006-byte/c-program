#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
 int main()
{
	struct node a,b;
	a.data = 10;
	a.next = NUll;
	
	b.data = 20;
	b.next = Null;
	
	a.next=&b;
	
	printf("the data in a is %d\n",a.data);
	printf("the data in b is %d\n",b.data);
	printf("the data in b is %d\n",a.next->data)
}
