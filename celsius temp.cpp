#include<stdio.h>
int main()
{
	float ctemp,ftemp;
	printf("enter temp in celsius");
	scanf("%f",&ctemp);
	ftemp=1.8*ctemp+32;
	printf("the temp of fahrenheit is %f",&ftemp);
}
