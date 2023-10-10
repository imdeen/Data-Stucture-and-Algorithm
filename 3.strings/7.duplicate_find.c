#include<stdio.h>

int duplicate(){
    char A[] = "finding";
    int i,j;
    for(i=0;A[i]!='\0';i++){
        for(j=i+1;A[j]!='\0';j++){
            if(A[i]==A[j]){
                printf("%c is duplicate \n", A[i]);
            }
        }
    }
}

int multiDuplicates(){
    char A[]="findingiii";
    int H[25]={0};
    int i;
    for(i=0;A[i]!='\0';i++){
        H[A[i]-97]+=1;
    }
    for(i=0;i<26;i++){
        if(H[i]>1){
            printf("%c is duplicated %d times\n",i+97,H[i]);
        }
    }

}

int duplicate_bitwise(){
   char A[]="ffindingf";
   int b=0,x=0;
   for(int i=0;A[i]!='\0';i++){
    x=1;
    x = x << (A[i]-97);
    if((x & b)>0){
        printf("%c is duplicate\n",A[i]);
        x = (x & b);
       
    }else{
        b = (x | b);
    }

   }
    
}

int main(){
    duplicate_bitwise();
    return 0;
}