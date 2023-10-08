#include<stdio.h>

int vcCount(){
    char A[] = "how are you ?, bastard";
    int i,vcount=0,ccount=0;
    for(i=0;A[i]!='\0';i++){
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u'){
            vcount++;
        }else if(A[i]>'a' && A[i]<'z'){
            ccount++;
        }
    }
    printf(" %d , %d \n",vcount,ccount);
    return 0;

}

int word_count(){
    char A[] ="how are u";
    int i,count=0;
    for(i=0;A[i]!='\0';i++){
        if(A[i]==' ' && A[i-1]!=' '){
            count++;
        }
    }
    printf("%d \n", count+1);
    return 0;
}

int main(){
    vcCount();
    word_count();
    return 0;
}