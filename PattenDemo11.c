#include<stdio.h>
int main(){
	
	int n=6;
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n-i;j++){
			printf("  ");
		}
		
		for(int j=0;j<i;j++){
			
			printf("  %d ",i);
		}
		printf("\n");
	}
	return 0;
}