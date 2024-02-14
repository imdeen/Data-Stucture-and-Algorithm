#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
}*top=NULL;

void push(int x){
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));

    if(t==NULL)
        printf("stack is full");
    else
    {
        t->data=x;
        if(top){
        t->next=top;
        top=t;
        }else{
            top=t;
            t->next=NULL;
        }
    }
}

int pop()
{
    struct node *t;
    int x=-1;

    if(top==NULL)
        printf("stack is empty\n");
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}

int display(){
 struct node *p;
 p=top;
 while(p!=NULL){
    printf("%d ", p->data);
    p=p->next;
 }

 printf("\n");
}

int main(){
    push(10);
    push(20);
    push(30);


    display();
    return 0;

    // printf("%d",pop());
}
