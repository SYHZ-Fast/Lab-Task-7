#include<stdio.h>
#include<string.h>
//A->65, Z->90 ,a->97, z->122
int main(){
    char password[15];
    printf("Enter your password: ");
    scanf("%[^\n]",password);
   int length = 0,i=0,isLength=0,isLower = 0, isCapital = 0,isDigit = 0, isSpecial= 0 ;
   while(password[i] != '\0'){
       length++;
       i++;
    }
    if(length>=8 && length<=15) isLength = 1;  

   for(int i =0; i<length;i++){
        if(password[i]>=97 && password[i]<=122) isLower = 1;}
    for(int i =0; i<length;i++){
        if(password[i]>=65 && password[i]<=90) isCapital = 1;}
    for(int i =0; i<length;i++){
        if(password[i]>=48 && password[i]<=57) isDigit = 1;}
    for(int i =0; i<length;i++){
        if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='%' || password[i]=='^' || password[i]=='&' || password[i]=='*') isSpecial = 1;}

    if(!isLength){
        printf("Invalid length.\n");
    }
    if(!isCapital){
        printf("No capital letter included!\n");
    }
    if(!isLower){
        printf("No Lower letter included!\n");
    }
    if(!isDigit){
        printf("No Digit included!\n");
    }
    if(!isSpecial){
        printf("No Special Character included!\n");
    }
    if(isCapital && isDigit && isLength && isLower && isSpecial){
        printf("Password is Valid!");
    }
    else{
        printf("Password is Not valid!");
    }
    }
