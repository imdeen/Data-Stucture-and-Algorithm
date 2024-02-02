#include<stdio.h>
#include<stdlib.h>

struct Matrix{
    int *A;
    int n;
};

void set(struct Matrix *m,int i,int j,int x){
    if(i>=j){
        m->A[(i*(i-1)/2 + (j-1))] = x;
    }
}

void Cset(struct Matrix *m,int i,int j,int x){
    if(i>=j){
        m->A[m->n*(j-2)+(j-2)*(j-1)/2+(i-j)]=x;
    }

}

int get(struct Matrix m,int i, int j){
    if(i>=j){
        return m.A[(i*(i-1)/2+(j-1))];
    }else{
        return 0;
    }
}

int cget(struct Matrix m,int i,int j){
    if(i>=j){
        printf("%d\n", m.A[m.n*(j-2)+(j-2)*(j-1)/2+i-j]);
    }else{
        return printf("0\n");
    }
}

void display(struct Matrix m){
    int i,j;
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            if(i>=j){
                printf("%d ", m.A[(i*(i-1)/2+(j-1))]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
void cdisplay(struct Matrix m){
    int i,j;
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            if(i>=j){
                printf("%d ",m.A[m.n*(j-2)+(j-2)*(j-1)/2 + i-j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main(){
    struct Matrix m;
    printf("enter dimension:\n");
    scanf("%d",&m.n);
    m.A = (int *)malloc(m.n*(m.n+1)/2*sizeof(int));
    printf("enter all the elements:\n");
    int x;
    for(int i=1;i<=m.n;i++){
        for(int j=1;j<=m.n;j++){
            if(i>=j){
                scanf("%d",&x);
                Cset(&m,i,j,x);
            }
        }
    }
    cdisplay(m);
    cget(m,3,2);
    // struct Matrix m;
    // printf("enter the dimension: \n");
    // scanf("%d", &m.n);
    // m.A = (int *)malloc(m.n*(m.n+1)/2*sizeof(int));
    // printf("enter all the elements: \n");
    // int x;
    // for(int i=1;i<=m.n;i++){
    //     for(int j=1;j<=m.n;j++){
    //         if(i>=j){
    //         scanf("%d", &x);
    //         set(&m,i,j,x);
    //         }
            
    //     }
    // }
    // display(m);
    return 0;
}