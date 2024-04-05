#include<stdio.h>
void swap(int x,int y)
{

	int temp;
	temp = x;
	   x = y;
	   y = temp;
	
}
void swap(int x,int y);

int main(){
	int x;
	int y;
	
	printf("Enter the any two value=");
	scanf("%d %d",&x,&y);
	
	printf("Value before swaping X=%d and Y=%d\n",x,y);
	swap(x,y);
	printf("Value After swaping x=%d and y=%d\n",x,y);
	
	return 0;
}