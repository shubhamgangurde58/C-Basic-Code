#include<stdio.h>
int main(){
	
	int a=10;
	int *b;
	
	b=&a;
	
	printf("\n value of A=%d",a);
	printf("\n Address of A=%x",&a);
	printf("\n value of B=%x",b);
	
	++a;
	printf("\nvalue of A=%d",a);
	printf("\nvalue of B=%d",*b);
	
	++(*b);
	printf("\n value of A=%d",a);
	
	
	return 0;
}