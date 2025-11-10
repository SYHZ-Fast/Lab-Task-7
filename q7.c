#include <stdio.h>
int main(){
	int arr[8];
	int i,j,target,count = 0;
	for(i= 0;i<8;i++){
		printf("enter number: ");
		scanf("%d",&arr[i]);
	}
		printf("enter the target: ");
		scanf("%d",&target);
	
	for(i=0;i<8;i++){
		for(j=i+1;j<8;j++){
			if((arr[i]+arr[j]) == target){
				printf("[%d,%d]",arr[i],arr[j]);
				count +=1;
			}
		}
	}
	printf("\nCount = %d",count);
}
