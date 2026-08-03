#include<stdio.h>
void display(int,float);
struct student
{
	int rno;
	float per;
};
main()
{
	struct student s;
	printf("enter student rno,per");
	scanf("%d%f",&s.rno,&s.per);
	display(s.rno,s.per);
}
void display(int a,float b)
{
	printf("the student details are :\n");
	printf("%d\t%f\n",a,b);
}
