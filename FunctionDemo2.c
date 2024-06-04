#include<stdio.h>
void add(int a,int b);
void sub(int a,int b);
int main(){

	int a;
	int b;
	printf("Enter the value of A=");
	scanf("%d",&a);
	printf("Enter the value of B=");
	scanf("%d",&b);
	
	add(a,b);
	sub(a,b);
	return 0;
}
void add(int a,int b){
	
	int c =a+b;
	printf("\nAddition=%d",c);
}
void sub(int a,int b){
	
	int c=a-b;
	printf("\nSubtraction=%d",c);
}