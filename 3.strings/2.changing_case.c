#include <stdio.h>

// int main()
// {
//     char A[] = "DEENU";
//     int i;
//     for (i = 0; A[i] != '\0'; i++)
//     {

//         A[i] = A[i] + 32;
//         printf("%c", A[i]);
//     }
// }

int main(){
    char A[]="DeEnU";
    int i;
    for(i=0;A[i]!='\0';i++){
        if(A[i]>'A' && A[i]<'Z'){
            A[i] = A[i] + 32; 
        }else if(A[i]>'a' && A[i]<'z'){
            A[i] = A[i]-32;
        }
        printf("%c",A[i]);
    }
}