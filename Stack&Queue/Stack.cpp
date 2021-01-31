#include<bits/stdc++.h>
using namespace std;

#define STACK_MAX 100

typedef struct
{
    int top;
    int data[STACK_MAX];
}Stack;


void push(Stack *s,int item)
{
    if(s->top<STACK_MAX){
        s->data[s->top]=item;
        s->top=s->top+1;
    }
    else printf("Stack is full!\n");
}

int pop(Stack *s)
{
    int item;

    if(s->top==0){
        printf("Stack is empty!\n");
        return -1;
    }
    else{
        s->top=s->top-1;
        item=s->data[s->top];
    }
    return item;
}

int main()
{
    Stack myStack;
    int item;
    myStack.top=0;
    push(&myStack,1);
    push(&myStack,2);
    push(&myStack,3);

    item=pop(&myStack);
    printf("%d\n",item);

    item=pop(&myStack);
    printf("%d\n",item);

    item=pop(&myStack);
    printf("%d\n",item);
}
