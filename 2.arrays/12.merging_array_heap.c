#include<stdio.h>
#include<stdlib.h>

struct Array {
    int A[20];
    int size;
    int length;
};

void display(struct Array m){
    int i;
    for(i=0;i<m.length;i++){
        printf("%d ", m.A[i]);
    }
}

struct Array *merge(struct Array *m,struct Array *n){
    int i=0,j=0,k=0;
    struct Array *z = (struct Array *)malloc(sizeof(struct Array));
    z->length=m->length+n->length;
    z->size=m->length+n->length;
    while(i<m->length && j<m->length){
        if(m->A[i]<n->A[j])
          z->A[k++] = m->A[i++];
        else
          z->A[k++] = n->A[j++];      
    }
    for(;i<m->length;i++){
        z->A[k++] = m->A[i];
    }
    for(;j<n->length;j++){
        z->A[k++] = n->A[j];
    }
return z;
}

int main(){
    struct Array x={{2,5,9,12,17},10,5};
    struct Array y = {{3,7,11,15,18},10,5};
    struct Array *z;
    z = merge(&x,&y);
    display(*z);

}