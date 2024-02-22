#include<stdio.h>
int main()
{
	int fact = 1;
	int  num;
	printf("Enter the any no:\n");
	scanf("%d",&num);
	for( int i=1;i<=num;i++)
	{
		fact = fact * i;
		
	}
	printf("Factorial=%d",fact);
}