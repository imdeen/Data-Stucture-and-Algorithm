#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "stack.h"

struct node *root = NULL;
void Tcreate()
{
    struct node *p, *t;
    int x;
    struct queue q;
    create(&q, 100);

    printf("Enter root value ");
    scanf("%d", &x);
    root = (struct node *)malloc(sizeof(struct node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        p = dequeue(&q);
        printf("enter left child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct node *)malloc(sizeof(struct
                                             node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        printf("eneter right child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct node *)malloc(sizeof(struct
                                             node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}
void Preorder(struct node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void preorder(struct node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void Inorder(struct node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }
}

void Postorder(struct node *p)
{
    if(p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d ",p->data);
    }
}

void ItrPre(struct node *p){
    struct Stack stk;
    Stackcreate(&stk, 100);

    while(p || !isEmptyStack(stk))
    {
        if(p)
        {
            printf("%d ", p->data);
            push(&stk, p);
            p=p->lchild;
        }
        else{
            p=pop(&stk);
            p=p->rchild;
        }
    }
}

void Itrinorder(struct node *p){
    struct Stack stk;
    Stackcreate(&stk, 100);

    while(p || !isEmptyStack(stk))
    {
        if(p)
        {
           
            push(&stk, p);
            p=p->lchild;
        }
        else{
            p=pop(&stk);
            printf("%d ", p->data);
            p=p->rchild;
        }
    }
}

void LevelOrder(struct node *root){
    struct queue q;
    create(&q, 100);

    printf("%d ", root->data);
    enqueue(&q, root);

    while(!isEmpty(q))
    {
        root=dequeue(&q);
        if(root->lchild){
            printf("%d ", root->lchild->data);
            enqueue(&q, root->lchild);
        }
        if(root->rchild)
        {
            printf("%d ", root->rchild->data);
            enqueue(&q, root->rchild);
        }
    }
}

int main()
{
    Tcreate();
    LevelOrder(root);
    return 0;
}