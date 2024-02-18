#include<stdio.h>
int main()
{
	int a;
	int b;
	int add,sub,multi,divi;
	printf("Enter the value of A=");
	scanf("%d",&a);
	printf("Enter the value of b=");
	scanf("%d",&b);
	add=a+b;
	sub=a-b;
	multi=a*b;
	divi=a/b;
	printf("\nAddition=%d",add);
	printf("\nSubtraction=%d",sub);
	printf("\nMultiplication=%d",multi);
	printf("\ndivision=%d",divi);
	return 0;
}