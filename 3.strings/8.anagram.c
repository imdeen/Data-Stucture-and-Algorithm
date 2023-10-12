#include<stdio.h>

//loop method
int anagram(){
    char A[] = "nitin";
    char B[] = "tiin";
    int i,j;
    for(i=0;A[i]!='\0';i++){
        for(j=0;B[j]!='\0';j++){
            if(A[i]==B[j]){
                break;
            }
        } 
        if(B[j]=='\0')
          break;  
    }
    if(A[i]=='\0'){
        printf("its an anagram");
    }else{
        printf("its not an anagram");
    }
}

//hashing method
int anagram_hash(){
    char A[]="kaams";
    char B[]="maak";
    int H[26]={0},i;

    for(i=0;A[i]!='\0';i++){
        H[A[i]-97]++;
    }
    
    for(i=0;B[i]!='\0';i++){
        H[B[i]-97]--;
    }


    if(B[i]=='\0' && A[i]=='\0'){
        printf("its an anagram");
    }else{
        printf("its not an anagram");
    }
}

//bitwise method
int anagram_bitwise(){
    char A[]="tu";
    char B[]="utz";
    int a=0,b=0,x=0,i;
    for(i=0;A[i]!='\0';i++){
        x=1;
        x = x << A[i]-97;
        if(a&x){
            continue;
        }else{
            a = a|x;
        }
    }
    for(i=0;B[i]!='\0';i++){
        x=1;
        x = x << B[i]-97;
        if(a&x){
            continue;
        }else{
            printf("it not an anagram");
            break;
        }
    }
    if(B[i]=='\0'){
        printf("its an anagram");
    }
}


int main(){
    anagram_bitwise();
    return 0;
}