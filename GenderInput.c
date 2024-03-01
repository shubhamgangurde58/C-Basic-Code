#include<stdio.h>
int main()
{
	int age;
	int gender;
	printf("\nEnter your gender:");
	scanf("%c",&gender);
	printf("\nEnter the age:");
	scanf("%d",&age);
	
	if(gender == 'm' && age > 18 )
	{
		printf("Driving allowed for Male driver");
	}
	else
	{
		printf("Driving not allowed for male driver");
	}
	return 0;
}