#include<stdio.h>
void countingsort(int a[],int n,int exp)
{
	int output [n];
	int count[10]={0};
	for( int i=0;i<n;i++)
	{
		int digit=(a[i]/exp)%10;
		   count[digit]++;
	}
	for( int i=1;i<n;i++)
	count[i]=count[i]+count[i-1];
	 for(int  i=n-1;i>=0;i--)
	 {
	 	int digit=(a[i]/exp)%10;
	 	output[count[digit]-1]=a[i];
	 	count[digit]--;
	 }
	 for( int i=0;i<n;i++)
	 a[i]=output[i];
}

void radixssort(int a[],int n)
{
	int max=a[0];
	for( int i=1;i<n;i++)
	   if(a[i]>max)
	      max=a[i];
	for(int exp=1;max/exp>0;exp=exp*10)
	  countingsort(a,n,exp);      
}
main()
{
	int i,n,a[25];
	printf("how many elements are you going to enter?");
	scanf("%d",&n);
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	radixsort(a,n);
	printf("sorted array:\n");
	for( i=0;i<n;i++)
	printf("%d\t",a[i]);
}

