//program on void pointer
#include<stdio.h>
int main()
{
	void *p;
	int x=2;
	float y=4.3;
	p=&x;
	printf("the x value is %d\n",(int*)p);
	printf("the address of x is %d\n",p);
	p=&y;
	printf("the y value is %d\n",(float*)p);
	printf("the address of y is %d\n",p);
}
