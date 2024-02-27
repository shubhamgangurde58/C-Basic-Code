#include<stdio.h>
int main()
{
	int num=0;
	int a=1;
	int b=0;
	int fibo=0;
	printf("Enter the any no:");
	scanf("%d",&num);

	for( int i=0;i<=num;i++ )
	{
		fibo=a+b;
		printf("\n%d",fibo);
		a=b;
		b=fibo;
	}
	
}