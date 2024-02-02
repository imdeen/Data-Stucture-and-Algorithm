#include<stdio.h>
#include<stdlib.h>

struct Matrix {
    int *A;
    int l;
};

void rset(struct Matrix *m,int i,int j,int x){
    if(i<=j){
         int index = m->l*(i-1)-(i-2)*(i-1)/2+(j-i); 
        m->A[index]=x;
    }
}

void cset(struct Matrix *m,int i ,int j,int x){
    if(i<=j){
        int index = j*(j-1)/2+(i-1);
        m->A[index]=x;
    }
}

int rget(struct Matrix m,int i,int j){
    if(i<=j){
        return m.A[m.l*(i-1)-(i-1)*(i-2)/2 + (j-i)];
    }else{
        return 0;
    }
}

int cget(struct Matrix m,int i,int j){
    if(i<=j){
        return i*(i-1)/2+(i-1);
    }else{
        return 0;
    }
}

void rdisplay(struct Matrix m){
    int i,j;
    for(i=1;i<=m.l;i++){
        for(j=1;j<=m.l;j++){
            if(i<=j){
                printf("%d ",m.A[m.l*(i-1)-(i-2)*(i-1)/2+(j-i)]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
void cdisplay(struct Matrix m){
    int i,j;
    for(i=1;i<=m.l;i++){
        for(j=1;j<=m.l;j++){
            if(i<=j){
                printf("%d ",m.A[j*(j-1)/2+(i-1)]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");

    }
}
void display(struct Matrix m){
    int x = m.l*(m.l+1)/2;
    for(int i=0;i<x;i++){
        printf("%d",m.A[i]);
    }
}

int main(){
    struct Matrix m;
    int i,j,x;
    printf("enter the dimension:\n");
    scanf("%d",&m.l);
    m.A = (int *)malloc(m.l*(m.l+1)/2*sizeof(int));

    printf("enter the elements:\n");
    for(i=1;i<=m.l;i++){
        for(j=1;j<=m.l;j++){
            if(i<=j){
                scanf("%d",&x);
                cset(&m,i,j,x);
            }
        }
    }
    cdisplay(m);
    display(m);
    return 0;
}