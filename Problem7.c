#include<stdio.h>
int main(){
	
	int positive=0;
	int negative=0;
	int zero=0;
	
	int input;
	int no;
	
	do{
		
		printf("\nEnter the number:=");
		scanf("%d",&no);
	
		if(no > 0){
		
			positive +=1;
		
		}else if(no < 0){
		
			negative +=1;
		
		}else{
		
			zero +=1;
		}
	
		printf("Enter to continue 1 stop  0=");
		scanf("%d",&input);
		
	}while(input==1);
	
	printf("\nPositive:=%d",positive);
	printf("\nnegative:=%d",negative);
	printf("\nzero:=%d",zero);
	return 0;
}