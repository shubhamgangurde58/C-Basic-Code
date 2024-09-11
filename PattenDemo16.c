#include<stdio.h>
int main(){
	
	int n=6;
	
	for(int i=1;i<n;i++){
		
		for(int j=n;j>0;j--){
			
			if(j<=i){
				
				printf("%d ",j);
				
			}else{
				
				printf("  ");
			}
			
		}
		
		for(int j=2;j<=i;j++){
			
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}