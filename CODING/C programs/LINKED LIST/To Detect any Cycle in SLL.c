#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head,*fast,*slow,*newnode,*temp,*te;



void detect_cycle()
{int c=0;
int count=0;
fast=slow=head;
while(fast!=NULL&&fast->next!=NULL)
{
    if(fast==head&&slow==head)
    {
        printf("\n\n\n\t\t\tPROCESS TO DETECT ANY CYCLE IN SLL IS INITIATED\n\t\tPLEASE WAIT...\n");
    }
    else if(fast==slow)
    {
        printf("\t\tCYCLE EXIST\n");
        te=fast;
        break;
        c=1;
    }
    fast=fast->next->next;
    slow=slow->next;
}

slow=te;
if(c==1)
{
while(c)
{
  slow=slow->next;
  count=count+1;
  if(te==slow)
        break;
}
}
printf("%d is length of cycle",count);

}
void main()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=4;
    head=newnode;
    newnode->next=(struct node*)malloc(sizeof(struct node));
    newnode=newnode->next;
    newnode->data=5;

    newnode->next=(struct node*)malloc(sizeof(struct node));
     newnode=newnode->next;

     newnode->data=6;
     newnode->next=(struct node*)malloc(sizeof(struct node));
     newnode=newnode->next;
     newnode->data=7;
     newnode->next=(struct node*)malloc(sizeof(struct node));
     newnode=newnode->next;
     newnode->data=9;

     newnode->next=head->next->next;

     detect_cycle();


}
