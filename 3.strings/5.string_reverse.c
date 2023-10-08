#include<stdio.h>

// int main(){
//     char name[]="deenu";
//     char B[6];
//     int i,j;
//     for(i=0;name[i]!='\0';i++){}
//     i = i-1;
//     for(j=0;i>=0;i--,j++){
//         B[j] = name[i];
//     }
//     B[j]='\0';
//     for(i=0;B[i]!='\0';i++){
//     printf("%c",B[i]);
//     }
// }
int main(){
    char name[]="deenu";
    int i,j,temp;
    for(j=0;name[j]!='\0';j++){}
    j = j-1;
    for(i=0;i<j;j--,i++){
        temp=name[j];
        name[j]=name[i];
        name[i]=temp;
    }
    for(i=0;name[i]!='\0';i++){
        printf("%c ", name[i]);
    }
}