//program of read two integers and find the sum and average of two numbers
#include<stdio.h>
int main()
{
	int num1,num2,sum;
	float average;
	printf("enter two integers,num1,num2");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	average=sum/2.0;
	printf("sum=%d\n",sum);
	printf("average=%2f",average);
}
