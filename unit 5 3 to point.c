//program on pointer to a pointer
#include<stdio.h>
int main()
{
	int x=2;
	int *p,**pp;
	p=&x;
	pp=&p;
	printf("the address of x is %1d\n",&x);
	printf("the value of x is %d\n",x);
	printf("the address of x is %1d\n",p);
	printf("the value of x is %d\n",*p);
	printf("the address of p is %1d\n",pp);
	printf("the value of p(address of x) is %d\n",*pp);
	printf("the value of x is %d\n",**pp);
}
