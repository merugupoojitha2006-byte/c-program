//to accept a sentence and to print it
#include<stdio.h>
int main()
{
	char sen[100];
	printf("enter a sentence");
	scanf("%[^\n]%*c",&sen);
	printf(sen);
	return 0;
}
