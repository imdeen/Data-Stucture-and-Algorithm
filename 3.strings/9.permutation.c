#include<stdio.h>

void perm(char s[],int k){
    static int A[4]={0};
    static char res[4];
    int i;
    if(s[k]=='\0'){
        res[k]='\0';
       printf("%s\n",res);
    }else{
        for(i=0;s[i]!='\0';i++){
            if(A[i]==0){
                 res[k]=s[i];
                A[i]=1;
                perm(s,k+1);
                A[i]=0;
            }
        }
    }
}

void swap(char *a,char *b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void perm2(char s[], int l,int h){
    int i;
    if(l==h){
        printf("%s \n",s);
    }else{
        for(i=l;i<=h;i++){
        swap(&s[l],&s[i]);
        perm2(s,l+1,h);
        swap(&s[l],&s[i]);
     }
    }
}

int main(){
    char s[]="ABC";
    perm(s,0);
    return 0;
}