#include<stdio.h>
int main()
{
	int x=2;
	float y=12.4;
	char z='a';
	int*p1=&x;
	float*p2=&y;
	char*p3=&z;
	printf("the value of x is %d\n",*p1);
	printf("the value of x is %d\n",*p2);
	printf("the value of x is %d\n",*p3);
}
