#include<stdio.h>
struct emp
{
	int e_id;
	char ename[20];
	float sal;
};
main()
{
	int i;
	struct emp e[3];
	for(i=0;i<3;i++)
	{
		printf("enter the details of emp %d",i+1);
		scanf("%d%s%f",&e[i].e_id,e[i].ename,&e[i].sal);
	}
	for(i=0;i<3;i++)
	{
		printf("the details of emp %d are :\n",i+1);
		printf("%d\t%s\t%f\n",e[i].e_id,e[i].ename,e[i].sal);
	}
}
