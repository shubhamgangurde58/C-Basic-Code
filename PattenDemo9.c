#include<stdio.h>
int main(){
	
	int n=7;
	
	for(int i=n;i>=1;i--){
		
		for(int j=1;j<n-i;j++){
			
			printf("%d ",j);
			
		}
		
		printf("\n");
	}
	return 0;
}