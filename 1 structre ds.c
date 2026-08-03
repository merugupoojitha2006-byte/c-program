#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[20];
	float per;
}s1,s2;
main()
{
//	struct student s1,s2;
	s1.rollno=737;
	strcpy(s1.name,"poojitha");
	s1.per=89.8;
	printf("enter student 2 details");
	scanf("%d%s%f",&s2.rollno,s2.name,&s2.per);
	printf("student 1 details are : \n");
	printf("student 1 rollno is %d\n",s1.rollno);
	printf("student 1 name is %s\n",s1.name);
	printf("student 1 per is %f\n",s1.per);
	printf("the student 2 details are : \n");
	printf("the student 2 rollno is %d\n",s2.rollno);
	printf("the student 2 name is %s\n",s2.name);
	printf("the student 2 per is %f\n",s2.per);
}
