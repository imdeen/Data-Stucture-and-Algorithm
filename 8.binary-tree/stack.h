
struct Stack{
    int size;
    int top;
    struct node **S;
};

void Stackcreate(struct Stack *st, int size)
{
    
    st->size=size;
    st->top=-1;
    st->S=(struct node **)malloc(st->size*sizeof(struct node));  
}



void push(struct Stack *st,struct node *x)
{
    if(st->size-st->top==1)
    {
        printf("stack is overflow\n");
    }
    else{
        st->top++;
        st->S[st->top]=x;
    }
}

struct node *pop(struct Stack *st)
{
    struct node *x=NULL;
    if(st->top==-1)
    {
        printf("Stack is underflow\n");
    }
    else{
        x=st->S[st->top];
        st->top--;
    }
    return x;
}


int isEmptyStack(struct Stack st)
{
    if(st.top==-1)
        return 1;
    else
        return 0;
}

int isFullStack(struct Stack st)
{
    return st.top==st.size-1;
}