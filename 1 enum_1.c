#include<stdio.h>
enum week {mon,tue,wed,thru,fri,sat,sun};
main()
{
	enum week day;
	day=sun;
	printf("%d",day);
}
