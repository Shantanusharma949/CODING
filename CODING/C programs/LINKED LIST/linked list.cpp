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

void de()
{int k=1;
while(k!=0){
    struct node *d;
    int y;
    printf("element to be deleted is: ");
    scanf("%d",&y);
    head=temp=d;
    if (head==0)
    {
        printf("underflow");
    }
    else{
            while(d->data!=y)
            {
                temp=d;
                d=d->link;
            }
            if (head==d)
            {
                head=head->link;
                temp=head;
                free(d);
            }
            else{
                temp->link=d->link;
                free(d);
            }
    }
    if (d==0)
        printf("element not found");
     printf("if you want to exit press 0 otherwise press any key");
    scanf("%d",&k);

}}
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
int main()
{
    int c;
    printf("pls enter your choice: \n");
    printf("1. create a node \n 2.delete a node \n 3. display the linked list \n 4. exit \n");
    scanf("%d",&c);
    while(c!=4){
    switch(c)
    {
        case 1: create();
        break;
        case 2: de();
        break;
        case 3: display();
        break;
        default:printf("pls enter your choice: ");
    printf("1. create a node \n 2.delete a node \n 3. display the linked list \n 4. exit");
    scanf("%d",&c);
    }
    printf("pls enter your choice: \n");
    printf("1. create a node \n 2.delete a node \n 3. display the linked list \n 4. exit \n");
    scanf("%d",&c);
    }

}
