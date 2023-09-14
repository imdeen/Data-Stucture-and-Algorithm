#include<stdio.h>
#include<stdlib.h>

void main(){
    int A[5]={3,7,19,13,11}; //created inside stack.
    int *p; //created inside stack but point to array created in heap memory(memory address is stored of p).
    int i;
    p = (int *)malloc(5* sizeof(int)); //malloc is used to allocating memory in heap.

    for(i = 0;i<5;i++){
        p[i] = i+(3+i);
    }
     for(i=0;i<5;i++){
        printf("%d ", A[i]);
    }

    printf("\n");

    for(i=0;i<5;i++){
        printf("%d ", p[i]);
    }

    
    free(p); //it is important to free memory in heap after use otherwise it will create memory leak problem. 
}