#include<stdio.h>
int main(){
	
	int no1;
	int no2;
	
	printf("Enter the first no:=");
	scanf("%d",&no1);
	
	printf("Enter the second no:=");
	scanf("%d",&no2);
	
	printf("Greater number is :=%d",findGreater(no1,no2));
	
}

 	int findGreater(int no1,int no2){
 		
 		if(no1 > no2){
 			return no1;
		 }
		 else{
		 	return no2;
		 }
	 }