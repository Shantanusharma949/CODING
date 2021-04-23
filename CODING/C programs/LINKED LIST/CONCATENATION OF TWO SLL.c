#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode;
int c1=0,c2=0;

struct SLL
{
    int info;
    struct SLL *link;
};
struct SLL *start,*naya,*chalo;

void insert1(int x)
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
    c1++;
}

void insert2(int y)
{
    naya=(struct SLL*)malloc(sizeof(struct SLL));
    naya->info=y;
    naya->link=NULL;
    if (start==NULL)
    {
        start=chalo=naya;
    }
    else
    {
        chalo->link=naya;
        chalo=naya;
    }
    c2++;
}

void display11()
{
 temp=head;
    while(temp!=NULL)
    {
        printf("First SLL is: %d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void display22()
{
 chalo=start;
    while(chalo!=NULL)
    {

        printf("Second SLL is: %d\t",chalo->info);
        chalo=chalo->link;
    }
}

void concatenation()
{
newnode->next=start;

temp=head;;
printf("\n");
while(temp!=NULL)
{
    printf("concated SLL is : %d\t",temp->data);
    temp=temp->next;
}
}

void main()
{
    insert1(2);
    insert1(3);
    insert1(4);
    insert1(5);
    insert1(6);

    insert2(10);
    insert2(13);
    insert2(14);

    display11();
    display22();

    concatenation();
}
