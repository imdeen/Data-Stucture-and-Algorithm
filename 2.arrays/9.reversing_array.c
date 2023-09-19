#include<stdio.h>

struct Array {
    int A[10];
    int size;
    int length;
};


void display(struct Array m){
    int i;
    for(i=0;i<m.length;i++){
        printf("%d ", m.A[i]);
    }
}

void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


void LeftShift(struct Array *m){
    for(int i=0;i<m->length-1;i++){
        
        m->A[i]=m->A[i+1];
        m->A[i+1]=0;
    }
};
void RightShift(struct Array *m){
    for(int i=m->length;i>=0;i--){
        m->A[i+1] = m->A[i];
        m->A[i]=0;
    }
}

 void reversing(struct Array *m){
    int B[10];
    int i,j;
    for(i=0,j=m->length-1;j>=0;j--,i++){
        B[i] = m->A[j];
       
    }
    for(i=0;i<m->length;i++){
        m->A[i] = B[i];
    }
}

void reversing1(struct Array *m){
    int i,j;
    for(i=0,j=m->length-1;i<j;i++,j--){
        swap(&m->A[i], &m->A[j]);
    }
}



int main(){
    struct Array n = {{1,2,3,4,5,6,7,8,9,11},10,10};
    // RightShift(&n);
    reversing1(&n);
    display(n);
};
