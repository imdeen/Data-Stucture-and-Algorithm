#include<stdio.h>

int main(){
    char A[] = "AeEau";  
    char B[] = "aeEger"; 
    int i,j;
    for(i=0,j=0;A[i]!='\0',B[j]!='\0';i++,j++){
        if(A[i]>=65 && A[i]<=90){
            A[i] = A[i] +32;
        }
        else if(B[j]>=65 && B[j]<=90){
            B[j] = B[j]+32;

        }
        if(A[i]!=B[j]){
            break;
        }}
       if(A[i]==B[j]){
        printf("both are equal");
       } else if(A[i]>B[j]){
            printf("a is greater");
        } else { 
            printf("b is greater");}
          
}