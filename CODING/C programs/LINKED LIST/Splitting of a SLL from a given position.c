#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node *link;
};

struct node *head,*temp,*newnode,*start;
int c=0;
void insertion(int x)
{
    c++;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=NULL;

    if(head==NULL)
    {
        head=temp=newnode;
    }
    else{
        temp->link=newnode;
        temp=newnode;
    }
}

void display()
{
    temp=head;
    while(temp!=NULL)
    {
      printf("SLL is: %d\n",temp->data);
      temp=temp->link;
    }
}


void split(int y)
{

    temp=head;
    int i;
    if(y<=c)
    {
       for(i=1;i<y;i++)
       {
           temp=temp->link;
       }
       start=temp->link;
       temp->link=NULL;
    }
    else{
        printf("\n\n\t\twrong input\n\n");
    }
}

void display2()
{
    struct node *k,*u;
    k=head;
    u=start;
    printf("first part of SLL is: ");
    while(k!=NULL)
    {
       printf("\t%d",k->data);
       k=k->link;
    }
    printf("\nSecond part of SLL is: ");
    while(u!=NULL)
    {
        printf("\t%d",u->data);
        u=u->link;
    }
}

void main()
{
    insertion(1);
    insertion(2);
    insertion(3);
    insertion(4);
    insertion(5);
    insertion(6);
    insertion(7);

    display();

    split(5);

    display2();
}
