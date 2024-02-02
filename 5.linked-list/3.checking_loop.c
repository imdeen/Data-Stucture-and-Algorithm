#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*first=NULL,*second=NULL,*third=NULL;

void create(int A[], int n){
    int i;
    struct node *t, *last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last = first;

    for(i=1;i<=n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}


void display(struct node *p){
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
}

int isLoop(struct node *f){
    struct node *p, *q;
    p=q=f;
    do{
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }while(p && q && p!=q);
    if(p==q)
        return 1;
    else
        return 0;
}

int main(){
    struct node *t,*u;
    int A[]={3,5,6,7,8,9};

    create(A,5);
    display(first);

    t=first->next->next;
    u=first->next->next->next->next->next;
    u->next=t;
    
    printf(" %d ",isLoop(first));
    return 0;
}