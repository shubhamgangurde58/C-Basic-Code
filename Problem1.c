#include<stdio.h>
int main(){
	
	int a;
	int b;
	int c;
	printf("Enter the three number :=");
	scanf("%d%d%d",&a,&b,&c);
	
	findAverage(a,b,c);
	return 0;
}

	void findAverage(int a,int b,int c){
		
			int average = (a+b+c)/3;
				
			printf("Average of three number is:=%d",average);
	}