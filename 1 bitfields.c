#include<stdio.h>
struct date
{
	unsigned int day:5;
	unsigned int month:4;
	int year;
};
main()
{
	printf("size of date is %lu bytes\n",sizeof(struct date));
	struct date dt = { 31,12,2014};
	printf("date is %d/%d/%d",dt.day,dt.month,dt.year);
}
