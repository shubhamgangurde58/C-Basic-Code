#include<stdio.h>
int main()
{
	int age;
	printf("\nEnter the Age=");
	scanf("%d",&age);
	if(age >= 18)
	{
		printf("Allow for voting");
	}
	else
	{
		printf("Not Allow for voting");
	}
}