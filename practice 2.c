//program to swap two numbers without using third variable
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two values a,b");
	scanf("%d%d",&a,&b);
	printf("before swapping:a=%d,\n,b=%d",a,b);
	a=a+b;
	b=a-b;
	c=a-b;
	printf("after swapping:a=%d,\n,a,b");
}
