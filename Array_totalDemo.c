#include<stdio.h>
int main()
{
	int size;
	int total;
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
			total+=arr[j];
	}
	printf("\nTotal=%d",total);
	
	return 0;
}