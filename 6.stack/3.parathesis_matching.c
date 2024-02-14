#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node 
{
    char data;
    struct node *next;
}*top=NULL;

void push(char x){
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));

    if(t==NULL){
        printf("stack is full\n");
    }else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

char pop()
{
    struct node *t;
    char x=-1;

    if(top==NULL){
        printf("stack is empty\n");
    }else{
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}

void display(){
    struct node *p;
    p=top;
    while(p!=NULL){
        printf("%d", p->data);
        p=p->next;
    }
    printf("\n");
}

int isBalanced(char *exp){
    int i;

    for(i=0;exp[i]!='\0';i++){
        if(exp[i]=='('){
            push(exp[i]);
        }else if(exp[i]==')'){
            if(top==NULL)
                return 0;
            pop();
        }
    }
    if(top==NULL)
        return 1;
    else
        return 0;
}

//infix to post fix conversion

int pre(char x){
    if(x=='+' || x=='-'){
        return 1;
    }else if(x=='*'||x=='/'){
        return 2;

    }
}

int isOperand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/'){
        return 0;
    }else{
        return 1;
    }
}

char *InToPost(char *exp){
    int i=0,j=0;
    char *postfix;
    int len=strlen(exp);
    postfix=(char *)malloc((len+2)*sizeof(char));

    while(exp[i]!='\0'){
        if(isOperand(exp[i])){
            postfix[j++]=exp[i++];
        }else{
            if(pre(exp[i]>pre(top->data))){
                push(exp[i++]);
            }else{
                postfix[j++]=pop();
            }
        }
    }
    while(top!=NULL){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;
}


int main(){
    char *exp = "a+b*c-d";
    push('#');
 
    char *postfix=InToPost(exp);
    printf("%s ", postfix);
    // printf("%d ", isBalanced(exp));
    return 0;
}

