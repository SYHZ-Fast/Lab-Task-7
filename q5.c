#include<stdio.h>
int main(){
	int i,temp,count,arr[10];
	for(i=0;i<10;i++){
		printf("Enter the number: ");
		scanf("%d",&arr[i]);
		count = 0;
	}
	printf("Orignal Array :");
	for(i=0;i<10;i++){
		printf(" %d",arr[i]);
	}
	if(arr[0]<arr[1]){
		temp = arr[1];
		arr[1]=arr[0];
		arr[0] = temp;
		count+=1;
	}
	if(arr[1]>arr[2]){
		temp = arr[2];
		arr[2]=arr[1];
		arr[1] = temp;
		count+=1;
	}
	if(arr[2]<arr[3]){
		temp = arr[3];
		arr[3]=arr[2];
		arr[2] = temp;
		count+=1;
	}	
	if(arr[3]>arr[4]){
		temp = arr[4];
		arr[4]=arr[3];
		arr[3] = temp;
		count+=1;
	}
	if(arr[4]<arr[5]){
		temp = arr[5];
		arr[5]=arr[4];
		arr[4] = temp;
		count+=1;
	}
	if(arr[5]>arr[6]){
		temp = arr[6];
		arr[6]=arr[5];
		arr[5] = temp;
		count+=1;
	}
	if(arr[6]<arr[7]){
		temp = arr[7];
		arr[7]=arr[6];
		arr[6] = temp;
		count+=1;
	}	
	if(arr[7]>arr[8]){
		temp = arr[8];
		arr[8]=arr[7];
		arr[7] = temp;
		count+=1;
	}
	if(arr[8]<arr[9]){
		temp = arr[8];
		arr[8]=arr[9];
		arr[9] = temp;
		count+=1;
	}
	if(arr[9]>arr[10]){
		temp = arr[9];
		arr[9]=arr[10];
		arr[10] = temp;
		count+=1;
	}
	printf("Wave form:");
	for(i = 0;i<10;i++){
		printf(" %d",arr[i]);
	}
	printf("\nCount: %d", count);
}
