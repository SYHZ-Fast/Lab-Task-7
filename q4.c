#include<stdio.h>
void display(int arr[],int count){
	int i = 0;
	printf("Numbers : ");
	for(i;i<count;i++){
		printf(" %d",arr[i]);
	}
}
int main(){
	int arr[12];
	int arr1[12],arr2[12],arr3[12];
	int i,both,one,neither;
	both = 0;one = 0; neither = 0;
	int sum1 =0, sum2 = 0, sum3 = 0;
	for(i=0;i<12;i++){
		printf("Enter a number: ");
		scanf("%d",&arr[i]);
		if((arr[i]%3 ==0) && (arr[i] % 2 == 0)){
			arr1[both] = arr[i];
			sum1 += arr1[both];
			both++;
		}
		else if((arr[i]%3 == 0)||(arr[i] % 2 == 0)){
			arr2[one] = arr[i];
			sum2 += arr2[one];
			one ++;
		}
		else{
			arr3[neither] = arr[i];
			sum3 += arr3[neither];
			neither ++;
		}
	}
	printf("-- Both --\n");
	display(arr1,both);
	printf("\nsum of numbers divisible by both: %d\nCount: %d\n",sum1,both);
	printf("-- Any one --\n");
	display(arr2,one);
	printf("\nsum of numbers divisible by any one: %d\nCount: %d\n",sum2,one);
	printf("-- Neither --\n");
	display(arr3,neither);
	printf("\nsum of numbers divisible by neither: %d\nCount: %d\n",sum3,neither);
	
}
