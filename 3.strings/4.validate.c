#include<stdio.h>

int validate(char *name){
    int i;
    for(i=0;name[i]!='\0';i++){
        if(!(name[i]<=90 && name[i]>=65) && !(name[i]<='z' && name[i]>='a')){
            return 0;  
        }
    }
    return 1;
}

int main(){
    char *name = "de?nu";
    if(validate(name)){
        printf("true");
    }else{
        printf("false");
    };
    return 0;
}