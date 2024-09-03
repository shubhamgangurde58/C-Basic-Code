#include<stdio.h>
int main(){
	
	int radius;
	printf("Enter the radius:=");
	scanf("%d",&radius);
	
	//printf("circumference of radius :=",
	
	findRadius(radius);	
	return 0;
}

 void findRadius(int radius){
 	
 	int circum ;
 	
 	circum = 2 * 3.14 * radius; 
 
 	printf(circum);
 	//return circum;	
 }