#include<stdio.h>

//comparing two string
int compare(){
    char A[] = "deenu";  
    char B[] = "deenu"; 
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
        printf("both are equal\n");
       } else if(A[i]>B[j]){
            printf("a is greater\n");
        } else { 
            printf("b is greater\n");}
}


//checking if palindrome  
int palindrome(){
    char word[] = "deed";
    int i,j;
    for(j=0;word[j]!='\0';j++){}\
    j=j-1;
    for(i=0;i<j;i++,j--){
        if(word[i]!=word[j]){
            printf("not palindrome!!!");
            break;
        }
    }
    if(word[i]==word[j]){
        printf("palindrome!!!");
    } 

      
          
}

int main(){
    compare();
    palindrome();
    return 0;

}