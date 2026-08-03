#include<stdio.h>
enum week {mon=5,tue=1,wed=7,thru,fri,sat,sun};
main()
{
	enum week day;
	day=sun;
	printf("%d",day);
}
