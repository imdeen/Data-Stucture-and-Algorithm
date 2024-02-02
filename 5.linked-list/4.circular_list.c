#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*head;

void create(int A[], int n)
{
    int i;
    struct node *t,*last;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=A[0];
    head->next=head;
    last=head;

    for(i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void display(struct node *p){
    do{
        printf("%d ", p->data);
        p=p->next;
    }while(p!=head);

}

void insert(struct node *p, int index, int x){
    struct node *t;
    int i;
     if(index==0)
     {
        t =(struct node *)malloc(sizeof(struct node));
        t->data=x;
        if(head==NULL){
            head=t;
            head->next=head;
        }
        else{
            while(p->next!=head)p=p->next;
            p->next=t;
            t->next=head;
            head=t;
        }
     }else{
        for(i=0;i<index-1;i++)p=p->next;
        t=(struct node *)malloc(sizeof(struct node));
        t->data=x;
        t->next=p->next;
        p->next=t;
     }
}
int leng(struct node *p){
    int c=0;
    do{
        c++;
        p=p->next;
    }while(p!=head);
    return c;
}

int delete(struct node *p,int index){
    int i,x;
    struct node *q;
    
    if(index<0 || index>leng(head))
        return -1;
    if(index==1)
    {
        while(p->next!=head)p=p->next;
        x=head->data;
        if(head==p)
        {
            free(head);
            head=NULL;
        }else{
            p->next=head->next;
            free(head);
            head=p->next;
        }
    }
    else
    {
        for(i=0;i<index-2;i++){
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        x=q->data;
        free(q);
    }
    return x;
}

int main(){
    int A[]={2,4,5,7,8,9};
    create(A,5);
    delete(head,3);
    display(head);
    return 0;
}