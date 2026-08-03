#include<stdio.h>
union a
{
	int x;
	char y;
};
union b
{
	int arr[10];
	char y;
};
main ()
{
	printf("sizeof a :%d\n",sizeof (union a));
	printf("sizeof b :%d\n",sizeof (union b));
}
