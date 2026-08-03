#include<stdio.h>
#include<string.h>
struct emp
{
	int eid;
	char ename[20];
	float sal;
}e1,e2;
main()
{
	e1.eid=737;
	strcpy(e1.ename,"poojitha");
	e1.sal=85000;
	e2=e1; //emp details are copied to emp2
	printf("the emp2 details are :\n");
	printf("%d\t%s\t%0.2f\n",e2.eid,e2.ename,e2.sal);
}
