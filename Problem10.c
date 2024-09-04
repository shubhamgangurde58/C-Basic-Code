#include<stdio.h>
int main(){
	
	int n=0;
	int a=0;
	int b=1;
	int fibo=0;
	
	printf("Enter the number :=");
	scanf("%d",&n);
	
	for(int i=1;i<n;i++){
		
		fibo = fibo + a;
		a = b;
		b = fibo;
		
		printf("\n%d",fibo);
	}
	return 0;
}