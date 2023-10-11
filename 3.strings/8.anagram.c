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


int main(){
    anagram_hash();
    return 0;
}