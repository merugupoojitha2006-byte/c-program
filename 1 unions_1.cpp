#include<stdio.h>
union car
{
	char name[50];
	float price;
}car1,car2;
main()
{
	printf("enter car1 name & price\n");
	scanf("%s%f",car1.name,&car1.price);
	printf("enter car2 name & price\n");
	scanf("%s%f",car2.name,&car2.price);
	printf("the details of car1 are :\n");
	printf("car1 name is %s\n",car1.name);
	printf("car1 price is %f\n",car1.price);
	printf("the details of car2 are :\n");
	printf("car2 name is %s\n",car2.name);
	printf("car2 price is %f\n",car2.price);
}
