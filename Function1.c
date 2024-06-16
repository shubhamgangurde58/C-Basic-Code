#include<stdio.h>
void add(int a,int b){
	int c =a+b;
	printf("Addition=%d\n",c);
}
void sub(int a,int b){
	int c = a-b;
	printf("Subtraction=%d\n",c);
}
int main(){
	int a=20;
	int b=10;
	add(a,b);
	sub(a,b);
	return 0;
}