#include<stdio.h>
void display(int marks[]);
int main()
{
	int marks[]={98,97,89,95,91};
	display(marks);
}
void display(int marks[])
{
	int i;
	printf("the marks are:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",marks[i]);
	}
}
