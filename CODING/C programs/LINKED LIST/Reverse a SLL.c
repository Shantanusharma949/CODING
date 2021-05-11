#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode,*curr,*prev,*age;

void create(int x)
{
    newnode=(struct node*)malloc(sizeof(struct node));

    newnode->data=x;
    newnode->next=NULL;

    if(head==NULL)
    {
        temp=head=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
}

void display()
{
    temp=head;
    if(head==NULL)
    {
        printf("SLL is empty");
    }
    else
    {
        while(temp!=NULL)
    {
        printf("\n%d\t",temp->data);
        temp=temp->next;
    }
    }
}

void rev()
{
    prev=head;
    curr=prev->next;
    age=curr->next;
    head->next=NULL;

    if(head==NULL)
    {
      printf("\nSLL is empty so no reverse is poddible");
    }
     else if(curr==NULL)
     {
         printf("\nonly one node is present");
     }
    else if(age==NULL)
    {

        curr->next=prev;
        head=curr;
    }
    else
    {
        while(curr!=NULL)
        {

            curr->next=prev;
            head=prev=curr;
            curr=age;
            if(age!=NULL)
            age=age->next;

        }
    }
}

void main()
{
    create(1);
    create(2);
    create(3);
    create(4);
    create(5);

    printf("Displaying original SLL\n");
    display();
     rev();
    printf("\nDisplaying reversed SLL\n");
    display();
}
