#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char name[20];
	int m1,m2,m3;
	int total;
};
main(int argc,char *x[])
{
	struct student s;
	strcpy(s.name,x[1]);
	s.m1=atoi(x[2]);
	s.m2=atoi(x[3]);
	s.m3=atoi(x[4]);
	s.total=s.m1+s.m2+s.m3;
	printf("student name :%s\n",s.name);
	printf("marks: %d %d %d\n",s.m1,s.m2,s.m3);
	printf("total marks:%d\n",s.total);
}
