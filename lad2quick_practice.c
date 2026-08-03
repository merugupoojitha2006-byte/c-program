#include<stdio.h>
int partition (int a[],int low,int high)
{
	int pivot=low;
	int i=low;
	int j=high;
	int temp;
	while(i<j)
	{
		while(i<=high && a[i]<=a[pivot])
		i++;
		while(j>=low && a[j]>a[pivot])
		j--;
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[pivot];
	a[pivot]=a[j];
	a[j]=temp;
	return j;
}
void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int p=partition(a,low,high);
		quicksort(a,low,p-1);
		quicksort(a,p+1,high);
	}
}
int main()
{
	int i,n,a[25];
	printf("how many elements are you going to enter?");
	scanf("%d",&n);
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	scanf("%d\t",&a[i]);
	quicksort(a,0,n-1);
	printf("the sorted elements are:\n");
	for (i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
