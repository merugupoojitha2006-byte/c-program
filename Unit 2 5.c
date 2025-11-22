//area of circle
#include<stdio.h>
#define pi 3.14
int main()
{
	float radius,area;
	printf("enter radius");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("the area of circle is %0.2f",area);
}
