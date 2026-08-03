//program on command line arguments
#include<stdio.h>
#include<stdlib.h>
main(int c,char *x[])
{
	printf("%s\n",x[0]);
	printf("%s\n",x[1]);
	printf("%s\n",x[2]);
	printf("count of arguments is %d\n",c);
}
