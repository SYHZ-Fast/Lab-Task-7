#include <stdio.h>
int main(){
	char arr[50];
	int temp,shift,i,length;
	i=0;
	
	printf("Enter your string: ");
	scanf("%[^\n]",arr);
	//printf("%s",arr);
	for(i;i<50;i++){
		if(arr[i] == '\n'){
			break;
		}
	}
	length = i;
	printf("Enter the number you want to shift it(1-25): ");
	scanf("%d",&shift);
	
	for(i = 0;i<length;i++){
		if ((arr[i]>='A' && arr[i]<='Z')||(arr[i] >= 'a' && arr[i]<='z') ){
		temp = (int)arr[i];
		temp += shift;
		arr[i] = (char)temp;
		}
		
	}
	printf("shifted string: %s",arr);
}
