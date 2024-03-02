#include<stdio.h>
int main()
{
	int n=0;
	int r=0;
	int h=0;
	printf("Enter the Three digit number:");
	scanf("%d",&n);
	int temp=n;
	for(int i=0;i<3;i++)
	{
		r=n%10;
		h=h+(r*r*r);
		n=n/10;
	}
	if(temp==h)
	{
		printf("%d  No is Armstrong",temp);
	}
	else
	{
		printf("%d  No is not Armstrong",temp);
    }
	return 0;
}