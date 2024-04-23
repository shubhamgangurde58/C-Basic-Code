#include<stdio.h>
int main()
{
	int n;
	printf("Enter the any no:");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("\nNumber is even");
	}
	else{
		printf("\nnumber is odd");
	}
	return 0;
}