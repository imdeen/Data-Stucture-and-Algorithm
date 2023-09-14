#include<stdio.h>
#include<stdlib.h>
//array values are stored in consecutive memory address
//array size cannot be increased because next memory address may not be available


//but array size in heap can be be changed by this method
int main(){
    int *p, *q; //two pointer
    int i;
    p=(int *)malloc(5*sizeof(int)); //array in heap size is 5
    q = (int *)malloc(10*sizeof(int)); //array in heap size is 10
    for(i=0;i<5;i++){
        p[i]=2*i+1; //odd numbers are stored in p
    }
    for(i=0;i<5;i++){
        q[i]=p[i]; //p array values are transferred to q arrays
    }
    free(p); //allocated memory is deleted from heap
    p=q; //address of q array is transferred to p(now p is the owner of q arrays)
    q=NULL;// q is deleted

     for(i=0;i<10;i++){
        printf("%d ", p[i]);
    }
}