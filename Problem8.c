#include<stdio.h>
int main(){
	
	int n;
	int x;
	printf("Enter  the value of n:=");
	scanf("%d",&n);
	
	printf("Enter  the value of x:=");
	scanf("%d",&x);	
	
	powerCalc(n,x);
	return ;
}

	void powerCalc(int n,int x){
		
		float pow=1.0;
		
		for(int i=0;i<n;i++){
		
				pow = pow * x;
		}
	
		printf("Power of x n:=%f",pow);
	}