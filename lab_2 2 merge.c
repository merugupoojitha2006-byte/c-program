//program on mergesort
#include<stdio.h>
void merge(int arr[],int low,int mid,int high)
{
	int b[25];
	int i=low,j=mid+1,k=0;
	while (i<=mid && j<=high)
	{
		if (arr[i]<arr[j])
		{
			b[k]=arr[i];
			i++;
		}
		else
		{
			b[k]=arr[j];
			j++;	
		}
		k++;
	}
	while (i<=mid)
	{
			b[k]=arr[i];
			i++;
			k++;
	}
	while (j<=high)
	{
			b[k]=arr[j];
			j++;
			k++;
	}
	for (i=low,k=0;i<=high;i++,k++)
	arr[i]=b[k];
}
void mergesort (int arr[],int low,int high)
{
	if(low<high)
	{
		int mid =(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
main()
{
	int a[25],i,n;
	printf("how many elements are you going to enter?");
	scanf("%d",&n);
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	scanf("%d\t",&a[i]);
	mergesort(a, 0, n-1);
	printf("sorted array:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
