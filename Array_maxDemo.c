#include<stdio.h>
int main()
{
	int size;
	int max;
	printf("\nEnter the Size of Array:");
	scanf("%d",&size);
	int arr[size];
	printf("\nEnter the Array element:");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nArray element :");
	
	for(int j=0;j<size;j++)
	{
		printf("\n:index=%d",arr[j]);
		if(max<=arr[j])
		{
			max=arr[j];
		}
	}
	printf("\nmax=%d",max);
	
	return 0;
}