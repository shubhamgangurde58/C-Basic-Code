#include<stdio.h>
void arrayDemo1(int arr[5]);
int main()
{
	int arr1[5]={90,80,70,60,50};
	int arr2[5]={1,2,3,4,5};

	arrayDemo1(arr1);
	arrayDemo1(arr2);
	return 0;
}

void arrayDemo1(int arr[5])
{
	for(int i=0;i<5;i++)
	{
		printf("index=%d\n",arr[i]);
	}
	printf("\n\n");
	
}