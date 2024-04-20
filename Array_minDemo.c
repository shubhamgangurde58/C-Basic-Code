#include<stdio.h>
int main()
{
	int size;
	printf("\nEnter the size of Array=");
	scanf("%d",&size);
	int a[size];

	printf("Enter the Array Element=");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[0];
	printf("\nThe array Element:\n");
	for(int i=0;i<size;i++)
	{
		printf("\nIndex=%d",a[i]);
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("\nMinimum=%d",min);
		return 0;
}