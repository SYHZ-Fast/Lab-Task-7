
//Q1

#include <stdio.h>
int main (){
	int arr[14] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int len = sizeof(arr)/sizeof(arr[0]);//15
	int i;int j;
	j = len;//14
	for (i = 0; i<=(len-1)/2; i++){
		arr[j] = arr[i];
		j--;
	}
	for (i = 0; i<=14;i++){
		printf("%d\n",arr[i]);
	}
	printf("%d",len);
}


