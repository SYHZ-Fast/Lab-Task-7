#include <stdio.h>
int main (){
	char arr[25],len,i,count =0;
	printf("Enter your string: ");
	scanf("%[^\n]",arr);
	printf("%s\n",arr);
	int freq[256]={0}, visited[256] = {0};
	
	for(i=0;i<25;i++){
		if(arr[i] == '\0'){
		break;}
	}
	len = i;
	//printf("\n%d",len);
	
	for(i=0;i<len;i++){
		freq[arr[i]] ++;
	}
	
	for(i=0;i<len;i++){
		if((visited[arr[i]] == 1) || (arr[i] == ' ')){
			continue;	
		}
		printf("%c%d",arr[i],freq[arr[i]]);
		visited[arr[i]] = 1;	
	}
	printf("\n");

}
