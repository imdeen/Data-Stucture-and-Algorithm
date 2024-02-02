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

void create2(int A[], int n){
    int i;
    struct node *t, *last;
    second=(struct node*)malloc(sizeof(struct node));
    second->data=A[0];
    second->next=NULL;
    last = second;

    for(i=1;i<=n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}


void display(struct node *p){
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p=p->next;
    }
}

void merge(struct node *p, struct node *q){
    struct node *last;
    if(p->data < q->data){
        third=last=p;
        p=p->next;
        third->next=NULL;
    }else{
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p && q){
        if(p->data < q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p)last->next=p;
    if(q)last->next=q;
}



int main(){
    // struct node *temp;
    int A[]={3,7,9,13,17};
    int B[]={2,6,5,11,19};
    create(A,4);
    create2(B,4);
    // sortedInsert(first, 3);
    // display(first);
    // duplicateRemover(first);
    // reverse1(first);
    // reverse3(NULL,first);
    merge(first,second);

    // display(first);
    // printf("\n");
    // display(second);
    // printf("\n");
    // concat(first,second);
    display(third);

    // rdisplay(first);
    // printf("%d\n",sum(first));



    // temp = Lsearch(first,7);
    // if(temp){
    //     printf("key is found %d\n", temp->data);
    // }else{
    //     printf("key not found\n");
    // }
    // printf("%d", count(first));


    return 0;
}