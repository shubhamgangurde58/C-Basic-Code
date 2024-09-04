#include<stdio.h>
int main(){
	
	int n1;
	int n2;
	
	printf("Enter the value of n1:=");
	scanf("%d",&n1);
	printf("Enter the value of n2:=");
	scanf("%d",&n2);
	
	while(n1 != n2){
		
		if(n1>n2){
			
			n1 = n1 - n2;
		}else{
			
			n2 = n2 - n1;
		}
	}
	
	printf("GCD is :=%d",n2);
	return 0;
}