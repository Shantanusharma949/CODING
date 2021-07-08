#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;
int c=0;

void insert(int x)
{
    c++;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;

    if(head==NULL)
        temp=head=newnode;
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
}

void del()
{
    struct node *q=head;
    head=head->next;
    free(q);
}

void search(int x)
{
    int l=0;
    struct node *q=head,*p=NULL;
    while(q!=NULL)
    {
        if(q->data==x)
            {swap(q,p);
            l++;
            break;
            }


    p=q;
    q=q->next;
    }
    if(l==0)
    {
        del();
       insert(x);
    }

    }

void swap(struct node *q,struct node *p)
{

   if(p==NULL)
   {
       head=head->next;
       q->next=NULL;
       temp->next=q;
       temp=q;
       }
    else{
        p->next=q->next;
        q->next=NULL;
        temp->next=q;
        temp=q;
    }
}


void main()
{
    int pr_re,frame,arr[100],i,x,j;
    struct node *swap;
    printf("Enter number of process request: ");
    scanf("%d",&pr_re);
    printf("\nEnter the requests: ");

    for(i=0;i<pr_re;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter number of Frames: ");
    scanf("%d",&frame);

        for(i=0;i<frame;i++)
    {
        insert(arr[i]);
    }


    for(i=frame;i<pr_re;i++)
    {
        search(arr[i]);

    }

printf("Page faults occured: %d",c);
}
