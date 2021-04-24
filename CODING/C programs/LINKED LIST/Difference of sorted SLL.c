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


void sortList1() {
        //Node current will point to head
        struct node *current = head, *index = NULL;
        int temp;

        if(head == NULL) {
            return;
        }
        else {
            while(current != NULL) {
                //Node index will point to node next to current
                index = current->next;

                while(index != NULL) {
                    //If current node's data is greater than index's node data, swap the data between them
                    if(current->data > index->data) {
                        temp = current->data;
                        current->data = index->data;
                        index->data = temp;
                    }
                    index = index->next;
                }
                current = current->next;
            }
        }
    }

    void sortList2() {
        //Node current will point to head
        struct SLL *chalo =start, *index = NULL;
        int k;

        if(start == NULL) {
            return;
        }
        else {
            while(chalo != NULL) {
                //Node index will point to node next to current
                index = chalo->link;

                while(index != NULL) {
                    //If current node's data is greater than index's node data, swap the data between them
                    if(chalo->info > index->info) {
                        k = chalo->info;
                        chalo->info = index->info;
                        index->info = k;
                    }
                    index = index->link;
                }
                chalo = chalo->link;
            }
        }
    }

void Difference()
{
    temp=head;
    chalo=start;
    printf("\nDifference is: ");
    while(temp!=NULL && chalo!=NULL)
    {
        if(temp->data>chalo->info)
        {
            printf("\t%d",chalo->info);
           chalo=chalo->link;
        }
        else if(chalo->info>temp->data)
        {
            printf("\t%d",temp->data);
            temp=temp->next;
        }
        else{

            temp=temp->next;
            chalo=chalo->link;
        }
    }
}

void main()
{
    insert1(3);
    insert1(7);
    insert1(9);
    insert1(6);
    insert1(8);

    sortList1();

    display11();

    insert2(9);
    insert2(66);
    insert2(16);
    insert2(3);

    sortList2();

    display22();

    Difference();
}
