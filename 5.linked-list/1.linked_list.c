#include<stdio.h>
#include<stdlib.h>

struct node
{
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

void rdisplay(struct node *p){
    if(p!=NULL){
       rdisplay(p->next);
        printf("%d ",p->data);
    }
}

int count(struct node *p){
    int c =0;
    while(p!=0)
    {
        c++;
        p=p->next;
    }
    return c;
}

int sum(struct node *p){
    int sum=0;
    while(p!=0){
        sum = sum + p->data;
        p=p->next;
    }
    return sum;
}

int MaxFinder(struct node *p){
    int max=-32768;
    while(p!=0){
        if(p->data > max){
            max = p->data;
        }
        p=p->next;
    }
    return max;
    
}

struct node* Lsearch(struct node *p,int key)
{
    while(p!=0){
        if(key==p->data){
            return p;
        }
        p=p->next;
    }
    return 0;
}

int Count(struct node *p){
    int c = 0;
    while(p){
        c++;
        p=p->next;
    }
    return c;
}

void insert(struct node *p, int index, int x){
    struct node *t;

    if(index<0 || index > count(p)){
        return;
    }
    t = (struct node *)malloc(sizeof(struct node));
    t->data=x;

    if(index ==0){
        t->next =first;
        first = t;
    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
            t->next=p->next;
            p->next=t;
        
    }
}
void sortedInsert(struct node *p, int x){
    struct node *t,*q=NULL;
    t = (struct node *)malloc(sizeof(struct node));
    t->data=x;
    t->next=NULL;

    if(first==NULL){
        first = t;
    }
    else{
        while(p && p->data<x){
            q = p;
            p=p->next;   
        }
        if(p==first){
            t->next=first;
            first =t;
        }else{
            t->next=q->next;
            q->next=t;
        }
    }
}

int delete(struct node *p, int index){
    struct node *q=NULL;
    int x=-1,i;

    if(index<1 || index > count(p)){
        return -1;
    }
    if(index==1){
        q=first;
        x=first->data;
        first=first->next;
        free(p);
        return x;
    }
    else{
        for(i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
        return x;
    }
}

int isSorted(struct node *p){
    int x = -65536;

    while(p!=NULL){
        if(p->data < x){
            return 0;
        }
        x = p->data;
        p=p->next;
    }
    return 1;
}

void duplicateRemover(struct node *p){
    struct node *q=p->next;
    while(q!=NULL){
       if(p->data!=q->data){
        p=q;
        q=q->next;
       }
       else{
        p->next=q->next;
        free(q);
        q=p->next;
       }
    }

}

void reverse1(struct node *p){
    int *A,i=0;
    struct node *q=p;
    A = (int *)malloc(sizeof(int)*count(p));

    while(p!=NULL){
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL){
        q->data=A[i];
        q=q->next;
        i--;
    }
}

void reverse2(struct node *p){
    struct node *q=NULL,*r=NULL;

    while(p!=NULL){
       r=q;
       q=p;
       p=p->next;
       q->next=r; 
    }
    first=q;
}
void reverse3(struct node *q, struct node *p){
    if(p)
    {
        reverse3(p,p->next);
        p->next=q;
    }
    else
    {
        first=q;
    }
}

void concat(struct node *p, struct node *q){
    third = p;

    while(p->next!=NULL){
        p=p->next;
        p->next=q;
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