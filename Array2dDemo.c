#include<stdio.h>
int main()
{
	int arr[3][3]={{10,20},{50,60},{80,90}};
	int i=0;
	for(i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d",arr[i][j]);
			
		}
	}
	return 0;
}