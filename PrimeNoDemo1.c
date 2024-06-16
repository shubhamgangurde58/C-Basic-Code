#include<stdio.h>
int main()
{
	int num,i,flag=1;
	printf("Enter the Any no=");
	scanf("%d",&num);
	if(num==1)
	{
		flag=1;
	
	}
	else
	{
	
		for(i=2;i<num;i++)
		{
			if( num % i == 0)
			{
				flag = 0;
				break;
			}
		}
	}
	if(flag == 1)
	{
		printf("No is prime");	
	}
	else
	{
		printf("No is not prime");  
	}
	return 0;
}