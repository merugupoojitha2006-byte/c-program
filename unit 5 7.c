#include<stdio.h>
int main()
{
	int a[5]={2,4,6,8,10};
	int *p,i;
	p=&a[0];
	printf("%1d\t",&a[0]);
	printf("%1d\n",a+1);
	printf("the address are \n");
	for(i=0;i<4;i++)
	printf("%1d\n",a+i);
	printf("the address are \n");
	for(i=0;i<4;i++)
	printf("%1d\n",p+i);
	printf("the values are \n");
	for(i=0;i<4;i++)
	printf("%1d\n",*(a+i));
	printf("the values are \n");
	for(i=0;i<4;i++)
	printf("%1d\n",*(p+i));
}
