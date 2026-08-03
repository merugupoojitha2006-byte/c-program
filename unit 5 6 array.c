#include<stdio.h>
int main()
{
	int x[4],i;
	for(i=0;i<4;i++)
	{
		printf("address of x[%d]is %1d\n",i,&x[i]);
	}
	printf("address of array is %1d\n",x);
}
