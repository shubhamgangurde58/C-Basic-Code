#include<stdio.h>
int main(){
	
	int n=6;
	
	int k=0;
	
	for(int i=1;i<n;i++){
		
		for(int j=1;j<i;j++){
			
			k += 1;
			printf("%d ",k);
		}
		
		printf("\n");
	}
	return 0;
}