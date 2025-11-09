
//Q2

#include <stdio.h>

int main(){

	int prime[20];
	int composite[20];
	int num,factor,i,j,c;
	int indexPrime = 0;int indexComp = 0;
	
	
	for(i = 0; i<20 ; i++){
		printf("Enter a whole number: ");
		scanf("%d",&num);
		if (num < 0){
			printf("Invalid Number!\n");
			continue;
		}
		else if(num == 0 || num == 1){
			printf("Neither Prime Nor Composite.\n");
			continue;
		}
		factor =0;
		for ( j = num-1; j>= 1; j--){
			if (num % j == 0){
				factor++;
			}
		}
	}
		if (factor == 1){
			prime[indexPrime] = num;
			indexPrime++; 
		}
		else{
			composite[indexComp] = num;
			indexComp ++;
		}
		
	for (c = 0; c<indexPrime; c++){
		printf("Prime numbers : %d\n",prime[c]);
	}
	for (c = 0; c<=indexComp; c++){
		printf("Composite numbers : %d\n",composite[c]);
	}
}
