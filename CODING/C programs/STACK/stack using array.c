#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int top=-1,stack[10];
int N=10;



void push()
{
    int x;
    printf("enter the element to be pushed in a stack");
    scanf("%d",&x);
    if (top==N-1)
        printf("overflow");
    else{
        top++;
        stack[top]=x;
    }
}

void pop()
{
    if (top==-1)
        printf("underflow");
    else
    {
        printf("poped element is: %d",stack[top]);
        top--;
    }
}

void peek()
{
    if (top==-1)
        printf("underflow");
    else{
        printf("peek element is: %d",stack[top]);
    }
}

void display()
{
    int v;
    v=top;
    if (v==-1)
        printf("stack is empty");
    else{
        while(v!=-1)
        {
            printf("%d ",stack[v]);
            v--;
        }
    }
}

void main()
{

    int c;
    printf("enter your choice from the following options \n");
    printf("1. push \n 2.pop \n 3.peek \n 4.display \n 5.exit \n");
    scanf("%d",&c);
    while (c!=5)
    {
        switch(c)
        {
            case 1: push();
            break;

            case 2: pop();
            break;

            case 3:peek();
            break;

            case 4: display();
            break;

            default: printf("wrong input \n");
            printf("enter your choice from the following options \n");
            printf("1. push \n 2.pop \n 3.peek \n 4.display \n 5.exit \n");
            scanf("%d",&c);
        }
        printf("enter your choice from the following options \n");
        printf("1. push \n 2.pop \n 3.peek \n 4.display \n 5.exit \n");
        scanf("%d",&c);
    }
}
