#include<stdio.h>
#include<conio.h>

struct node
{
    int coeff;
    int power;
    struct node *next;
};
struct node *head1=NULL,*head2=NULL,*head3=NULL;

//create function using input a struct node pointer//
void create(struct node *f)
{
printf("\nenter coefficient: ");
scanf("%d",&f->coeff);
printf("\nenter power: ");
scanf("%d",&f->power);
f->next=NULL;
int c=1;
do
{
    f->next=(struct node*)malloc(sizeof(struct node));
    f=f->next;
    f->next=NULL;
    printf("\nenter coefficient: ");
   scanf("%d",&f->coeff);
   printf("\nenter power: ");
   scanf("%d",&f->power);
   printf("\nDo you want to add more coefficients and powers?\n if yes than press 1 otherwise 0;\n");
   scanf("%d",&c);
   if(c!=0&&c!=1)
   {
       printf("\n\n\t\t\tWRONG INPUT\n");
       printf("\nDo you want to add more coefficients and powers?\n if yes than press 1 otherwise 0;\n");
      scanf("%d",&c);
   }
}while(c);

}

//Display function
void display(struct node *f)
{
   while(f!=NULL)
   {
       printf("%dX^%d",f->coeff,f->power);
       if(f->next!=NULL)
       printf("+");
       f=f->next;
   }

}

//SUBTRACTION OF TWO POLYNIMIALS
void sub_poly(struct node *f1,struct node *f2,struct node *f3)
{int x;
    while(f1->next!=NULL&&f2->next!=NULL)
    {if(f1->power==f2->power)
    {
      x=f1->coeff-f2->coeff;
      f3->coeff=x;
      f3->power=f1->power;
      f3->next=(struct node*)malloc(sizeof(struct node));
      f3=f3->next;
      f1=f1->next;
      f2=f2->next;
      f3->next=NULL;
    }
    else if(f1->power>f2->power)
    {
        f3->power=f1->power;
        f3->coeff=f1->coeff;
        f3->next=(struct node*)malloc(sizeof(struct node));
        f3=f3->next;
        f1=f1->next;
        f3->next=NULL;
    }
    else{
        f3->power=f2->power;
        f3->coeff=f2->coeff;
        f3->next=(struct node*)malloc(sizeof(struct node));
        f3=f3->next;
        f2=f2->next;
        f3->next=NULL;
    }
    }
    if(f1->next!=NULL)
    {
        while(f1->next!=NULL)
        {
            f3->coeff=f1->coeff;
            f3->power=f1->power;
            f3->next=(struct node*)malloc(sizeof(struct node));
            f3=f3->next;
            f1=f1->next;
            f3->next=NULL;
        }
    }
    else
    {
        while(f2->next!=NULL)
        {
            f3->coeff=f2->coeff;
            f3->power=f2->power;
            f3->next=(struct node*)malloc(sizeof(struct node));
            f3=f3->next;
            f2=f2->next;
            f3->next=NULL;
        }
    }

}


//void main() function//
void main()
{
    struct node *temp1,*temp2,*temp3;
    head1=(struct node*)malloc(sizeof(struct node));
    head2=(struct node*)malloc(sizeof(struct node));
    head3=(struct node*)malloc(sizeof(struct node));
    temp1=head1;temp2=head2;temp3=head3;

    printf("ENTER FIRST POLYNOMIAL: ");
    create(temp1);
    temp1=head1;
    printf("\nENTER SECOND POLYNOMIAL: \n");
    create(temp2);
    temp2=head2;


    int c=0;
    do
    {
    printf("\nENTER YOUR CHOICE: \n");
    printf("1.DISPLAY FIRST POLYNOMIAL\n2.DISPLAY SECOND POLYNOMIAL\n3.SUBTRACT SECOND POLYNOMIAL FROM FIRST\n4.EXIT\n");
    scanf("%d",&c);

        if(c==1)
            {
                temp1=head1;
             display(temp1);
             printf("\nENTER YOUR CHOICE: \n");
             printf("1.DISPLAY FIRST POLYNOMIAL\n2.DISPLAY SECOND POLYNOMIAL\n3.SUBTRACT SECOND POLYNOMIAL FROM FIRST\n4.EXIT\n");
             scanf("%d",&c);
    }
        else if(c==2)
            {
             temp2=head2;
             display(temp2);
             printf("\nENTER YOUR CHOICE: \n");
             printf("1.DISPLAY FIRST POLYNOMIAL\n2.DISPLAY SECOND POLYNOMIAL\n3.SUBTRACT SECOND POLYNOMIAL FROM FIRST\n4.EXIT\n");
             scanf("%d",&c);
            }
        else if(c==3)
           {
               temp1=head1;temp2=head2;temp3=head3;
              sub_poly(temp1,temp2,temp3);
              temp3=head3;
              display(temp3);
               printf("\nENTER YOUR CHOICE: \n");
               printf("1.DISPLAY FIRST POLYNOMIAL\n2.DISPLAY SECOND POLYNOMIAL\n3.SUBTRACT SECOND POLYNOMIAL FROM FIRST\n4.EXIT\n");
               scanf("%d",&c);
               }
        else if(c==4)
            break;
        else
        {
            printf("\t\t\t WRONG INPUT\n");
            printf("\nENTER YOUR CHOICE: \n");
            printf("1.DISPLAY FIRST POLYNOMIAL\n2.DISPLAY SECOND POLYNOMIAL\n3.SUBTRACT SECOND POLYNOMIAL FROM FIRST\n4.EXIT\n");
            scanf("%d",&c);

        }
    }while(c!=4);
}
