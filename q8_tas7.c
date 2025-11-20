#include <stdio.h>

int main(){
    int arr1[6],i=0;
    int arr2[6];
    for(i=0;i<6;i++){
        printf("Enter number: ");
        scanf("%d",&arr1[i]);
    }
    printf("=========Array2=======\n");
    for(i=0;i<6;i++){
        printf("Enter number: ");
        scanf("%d",&arr2[i]);
    }
    i=0;
    int j = 0;
    int arr3[12];
    while(i<12){
        arr3[i] = arr1[j];
        i+=1;
        arr3[i] = arr2[j];
        i+=1;
        j++;
    }
    printf("merged: ");
    for(i=0;i<12;i++){
        printf(" %d",arr3[i]);
    }
}