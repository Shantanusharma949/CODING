#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node *link;
};

struct node *head,*temp,*newnode;

void create(int x)
{
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=x;
  newnode->link=NULL;

  if(head==NULL)
        head=temp=newnode;
  else
  {
      temp->link=newnode;
      temp=newnode;
      newnode->link=head;
  }
}

void display()
{
    temp=head;
    printf("Circular Linked List is: %d\n",temp->data);
    temp=temp->link;
    while(temp!=head)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
}

void main()
{
    create(1);
    create(8);
    create(3);
    create(7);
    create(11);
    create(22);

    display();
}
