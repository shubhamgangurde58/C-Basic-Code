#include<stdio.h>
int main(){
	
	int n;
	int sum;
	printf("Enter the value of n:=");
	scanf("%d",&n);
	
	printSum(n,sum);
	return 0;
}

void printSum(int n,int sum){
	
	for(int i=1;i<=n;i++){
		
		if(i%2!=0){
			 
			 sum+=i;
		}
	}
	printf("Sum of odd number:=%d",sum);
}