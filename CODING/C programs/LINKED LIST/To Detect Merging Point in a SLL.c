#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head1,*head2,*p,*q;
int c1=0,c2=0;

void detect_merge_point(struct node *head1,struct node *head2)
{
    int i;
    p=head1;
    q=head2;
    while(p!=NULL)
    {
        c1=c1+1;
        p=p->next;
    }
    while(q!=NULL)
    {
       c2=c2+1;
       q=q->next;
    }
    p=head1;
    q=head2;
    if(c1>c2)
    {
        for(i=0;i<c1-c2;i++)
        {
            p=p->next;
        }
    }
    else
    {
        for(i=0;i<c2-c1;i++)
        {
            q=q->next;
        }
    }

    while(p!=q ||q!=p &&p!=NULL &&q!=NULL)
    {
        p=p->next;
        q=q->next;
    }

    if(p==q)
    {
        printf("\n\t\t\t MERGE POINT EXIST");

    }
    else if(p==NULL)
    {
        printf("\n\t\t\t MERGE POINT DOES NOT EXIST");
    }
}


void main()
{
  p=(struct node*)malloc(sizeof(struct node));
  p->data=1;
  head1=p;
  p->next=(struct node*)malloc(sizeof(struct node));
  p=p->next;
  p->data=3;
  p->next=(struct node*)malloc(sizeof(struct node));
  p=p->next;
  p->data=5;
  p->next=(struct node*)malloc(sizeof(struct node));
  p=p->next;


 q=(struct node*)malloc(sizeof(struct node));
  q->data=2;
  head2=q;
  q->next=(struct node*)malloc(sizeof(struct node));
  q=q->next;
  q->data=4;

  q->next=p;

  p->data=6;
  p->next=(struct node*)malloc(sizeof(struct node));
  p=p->next;
  p->data=8;
  p->next=NULL;

  p=head1;
  q=head2;

  detect_merge_point(head1,head2);
}
