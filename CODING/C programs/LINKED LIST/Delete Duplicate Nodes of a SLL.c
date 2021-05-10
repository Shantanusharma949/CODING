#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head,*temp,*newnode;

void create()
{
    int l=1;
    while(l!=0)
    {
    int x;
    printf("enter the data to be inserted in linked list");
    scanf("%d",&x);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=0;

    if (head==0)
    {
        head=temp=newnode;
    }
    else{
        temp->link=newnode;
        temp=newnode;
    }
    printf("if you want to exit press 0 otherwise press any key");
    scanf("%d",&l);
}
}


void display()
{
    temp=head;
    if (head==0)
    {
        printf("linked list is empty");
    }
    else{
    while (temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->link;
    }}
}

void delete_dub_nodes()
{
   int r;
   struct node *y,*prev=NULL;
   temp=y=head;
   while(y!=NULL)
   {
       r=y->data;
       y=y->link;
       temp=head;
       while(temp!=NULL)
       {
           if(r==temp->data)
           {
               if(temp==head)
               {
                   head=head->link;
                   free(temp);
                   temp=head;
               }
               else{
                prev->link=temp->link;
                free(temp);
                temp=prev->link;
               }

           }
           else{
            temp=temp->link;
            prev=prev->link;
           }

       }
   }

}


void main()
{
    create();




    delete_dub_nodes();

    temp=head;

    display();


}
