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
void swap()
{
    struct node *g;
    temp=g=head;
    int s,d;
    if (c%2==0)
    {
        while (temp!=NULL)
        {
          s=temp->data;
          temp=temp->next;
          d=temp->data;
          temp=temp->next;
          g->data=d;
          g=g->next;
          g->data=s;
          g=g->next;

        }
    }
    else
    {
        while (temp!=NULL)
        {
          s=temp->data;
          if (temp->next!=NULL)
         {

          temp=temp->next;
          d=temp->data;
          temp=temp->next;
          g->data=d;
          g=g->next;
          g->data=s;
          g=g->next;}

          else
          {
              break;
          }

        }
    }
    struct node *t;
    t=head;
    while(t!=NULL)
    {
        printf("\n%d\n",t->data);
        t=t->next;
    }
}

void display()
{
 temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

void main()
{
    insert(3);
    insert(6);
    insert(2);
    insert(9);
    insert(7);
    display();

    swap();
}

