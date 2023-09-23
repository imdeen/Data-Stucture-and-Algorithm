#include<stdio.h>
#include<stdlib.h>

struct Array {
    int A[10];
    int size;
    int length;
};

void display(struct Array m){
    for(int i=0;i<m.length;i++){
    printf("%d ",m.A[i]);
    }
};

struct Array *Union(struct Array *m,struct Array *n){
    int i=0,j=0,k=0;
    struct Array *z = (struct Array *)malloc(sizeof(struct Array));
   
    while(i<m->length && j<m->length){
        if(m->A[i]<n->A[j]){ 
          z->A[k++] = m->A[i++];
        }
          
        else if(m->A[i]== n->A[j]){
          z->A[k++] = n->A[j++];
          i++;}
        else{
          z->A[k++] = n->A[j++];}
    }
     for(;i<m->length;i++)
            z->A[k++] = m->A[i];
        
        for(;j<n->length;j++)
            z->A[k++] = n->A[j];
    z->size=m->length+n->length;
    z->length=m->length+n->length;
    return z;
};

struct Array *Intersection(struct Array *x,struct Array *y){
    int i,j,k;
    i=j=k=0;
    struct Array *z = (struct Array *)malloc(sizeof(struct Array));
    z->length=x->length+y->length;
    z->size=x->length+y->length;

    while(i<x->length && j<y->length){
        if(x->A[i]<y->A[j])
          i++;
        else if(x->A[i]>y->A[j])
          j++;
        else{
            z->A[k++] = x->A[i++];
            j++;
        }
    }
    return z;
}
struct Array *sub(struct Array *m, struct Array *n){
  int i,j,k;
  i=j=k=0;
  struct Array *z = (struct Array *)malloc(sizeof(struct Array)); 
  z->length=m->length+n->length;
  z->size=m->length+n->length;
  while(i<m->length && i<n->length){
    if(m->A[i]<n->A[j]){
      z->A[k++] = m->A[i++];
    }
    else if(m->A[i]>n->A[j]) {
    j++;
    }
    else{
      i++;
      j++;
    }
  }
  for(;i<m->length;i++){
    z->A[k++] = m->A[i];
  }
  return z;

}

int main(){
    struct Array x ={{2,4,7,8,19},10,5};
    struct Array y = {{1,4,6,9,19},10,5};
    struct Array *z;
    z = sub(&x,&y);
    display(*z);

}