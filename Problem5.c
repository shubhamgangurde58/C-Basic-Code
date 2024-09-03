#include<stdio.h>
int main(){
	
	int age;
	printf("Enter the person age:=");
	scanf("%d",&age);
	
	checkEligibility(age);
	return 0;
}

	void checkEligibility(int age){
		
		if(age > 18){
			printf("person is Eligible for voting");
		}else{
			printf("Person is not eligible for voting");
		}
	}