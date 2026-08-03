#include<stdio.h>
typedef struct
{
	int rollno;
	float per;
} stu;
main()
{
	stu s;
	s.rollno=101;
	s.per=89.5;
	printf("rollno:%d\t percentage:%f",s.rollno,s.per);
}
