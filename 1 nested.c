#include<stdio.h>
struct address 
{
	int dno;
	char street[30];
	int pincode;
};
 struct student
 {
 	int rno;
 	char name[20];
 	float per;
 	struct address adr;
 };
 main()
 {
 	struct student s;
 	printf("enter the student rno,name per,dno,street,pincode");
 	scanf("%d%s%f%d%s%d",&s.rno,s.name,&s.per,&s.adr.dno,s.adr.street,&s.adr.pincode);
 	printf("the student details are :\n");
 	printf("%d\t%s\t%f\n",s.rno,s.name,s.per);
 	printf("the address is :\n");
 	printf("%d\n%s\n%d\n",s.adr.dno,s.adr.street,s.adr.pincode);
 }
