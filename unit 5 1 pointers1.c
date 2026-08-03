//program on pointers
#include<stdio.h>
int main()
{
	int x=2;
	int*p;
	p=&x;
	printf("the address or x is %d",&x);
	printf("the address or x is %d",p);
	printf("the value of x is %d",x);
	printf("the value of x is %d",*p);
}
