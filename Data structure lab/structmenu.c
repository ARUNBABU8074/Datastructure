#include<stdio.h>
#include<stdlib.h>
void insatbeg(int);
void insatend(int);
void insbtw(int);
void delatbeg(int);
struct node
{
int data;
struct node *next;
}*head=NULL;

void main()
{
    int c,n,value,choice;
    do{
printf("...... your options are ......\n\n");
printf("1.insert at beggining \n");
printf("2.insert at end \n");
printf("3.insert b/w 2 nodes \n");
printf("4.traversal \n");
printf("5.delete at beggining \n");
PRINTF("6.DELETE AT END \n");
printf("enter your option : ");
scanf("%d",&c);
switch(c)
{
case 1:printf("enter the value to be inserted :" );
        scanf("%d",&value);
        insatbeg(value);
        break;
case 2:printf("enter the value to be inserted :" );
        scanf("%d",&value);
        insatend(value);
        break;
case 3: printf("enter the value to be inserted : ");
        scanf("%d",&value);
        insbtw(value);
        break;
case 4:if(head==NULL)
        printf("\n list is empty");
        else
        {
        struct node *temp=head;
        printf("\n list elements are : \n");
        while(temp->next!=NULL)
        {
        printf("%d --> ",temp->data);
        temp=temp->next;
        }
        printf("%d -->NULL \n",temp->data);
        }
        break;
case 5: if(head==NULL)
        printf("LIST is empty \n");
        else
        {
            struct node *temp=head;
            head=temp->next;
            free(temp);
        }
        printf("value deleted successfully\n");
        break;
case 6 :if(head==NULL)
        printf("LIST is empty \n");
        else
        {
            struct node *temp=head,*prv;
            while(temp->next!=NULL)
            {
                prv=temp;
                temp=temp->next;
            }
            prv->next=NULL;

            free(temp);}
        printf("value deleted successfully\n");
        break;

}
printf("enter 0 to continue \n");
scanf("%d",&choice);
    }while(choice==0);
}
void insatbeg(int value)
{
struct node *newnode=malloc(sizeof(struct node));
newnode->data=value;
if(head==NULL)
{
newnode->next=NULL;
head=newnode;
}
else
{
newnode->next=head;
head=newnode;
}
printf("\n one node inserted !!! \n");
}
void insatend(int value)
{
struct node *newnode=malloc(sizeof(struct node));
newnode->data=value;
newnode->next=NULL;
if(head==NULL)
{
newnode->next=NULL;
head=newnode;
}
else
{
struct node *temp=head;
while(temp->next!=NULL)
{
    temp=temp->next;
}
temp->next=newnode;
}
printf("\n one node inserted !!! \n");
}

void insbtw(int value)
{
   struct node *newnode=malloc(sizeof(struct node));
   int l1,l2,n;
   printf("enter the locotion where it to be inserted : ");
   scanf("%d %d",&l1,&l2);
newnode->data=value;
if(head==NULL)
{
newnode->next=NULL;
head=newnode;
}
else
{
  struct node *temp = head;
      while(temp->data != l1 && temp->data != l2 && temp->next!=NULL)
        {
            temp = temp->next;
        }
if(temp->data!=l1 && temp->data != l2)
{
    printf("given node not found in the list !!!");
}
else
    {
      newnode->next = temp->next;
      temp->next = newnode;
        }
}
printf("\n one node inserted !!! \n");
}
