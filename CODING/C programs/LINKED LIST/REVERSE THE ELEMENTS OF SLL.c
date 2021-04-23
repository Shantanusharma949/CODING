#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode;
int c=0;

void insert(int x)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if (head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    c++;
}

void display()
{
 temp=head;
    while(temp!=NULL)
    {
        printf("display of original SLL : %d\t",temp->data);
        temp=temp->next;
    }
}

void reverse()
{
    int arr[c],i=0;
    temp=head;
    while (temp!=NULL)
    {
        arr[i]=temp->data;
        temp=temp->next;
        i++;
    }

    for(i=c-1;i>=0;i--)
    {
        printf("\nReverse SLL is: %d",arr[i]);
    }
}

void main()
{
    insert(1);
    insert(7);
    insert(8);
    insert(4);
    insert(10);
    insert(13);

    display();

    reverse();
}
