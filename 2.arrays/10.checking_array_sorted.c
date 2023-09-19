#include<stdio.h>

struct Array {
    int A[10];
    int size;
    int length;
};

void display(struct Array m){
    for(int i=0;i<m.length;i++){
        printf("%d", m.A[i]);
    }
};

int isSorted(struct Array m){
    for(int i=0;i<m.length-1;i++){
        if(m.A[i]>m.A[i+1]){
            return -1;}
            }
        return 1;
}


int main(){
    struct Array n = {{1,3,4,5,6,7,9,11,12,13},10,10};
    printf("%d \n", isSorted(n));
    // display(n);
};

