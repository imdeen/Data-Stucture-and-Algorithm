#include<stdio.h>

struct Array {
    int A[20];
    int size;
    int length;
};

void display(struct Array m){
    for(int i=0;i<m.length;i++){
        printf("%d ", m.A[i]);
    }
};

struct Array merge(struct Array *m, struct Array *n,struct Array *o){
    int i=0,j=0,k=0;
    while(i<m->length && j<n->length){
        if(m->A[i]<n->A[j])
          o->A[k++] = m->A[i++];
        else
          o->A[k++] = n->A[j++];
    }
    for(;i<m->length;i++){
        o->A[k++] = m->A[i];
    }
    for(;j<n->length;j++){
        o->A[k++] = n->A[j];
    }
}

int main(){
    struct Array x ={{2,6,9,15,23},10,5};
    struct Array y ={{3,7,12,20,25},10,5};
    struct Array B ={{},x.length+x.length,x.length+x.length};
   merge(&x,&y,&B);
   display(B);
   return 0;
}