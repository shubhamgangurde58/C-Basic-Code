#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
	printf("After swaping\n *A=%d \t *B=%d",*a,*b);
}
int main()
{
	int a;
	int b;
	printf("Enter the value A & B:\n");
	scanf("%d%d",&a,&b);
	printf("Before Swaping\n");
	printf("A=%d\t B=%d\n",a,b);
	
	swap(&a,&b);
	return 0;
}
