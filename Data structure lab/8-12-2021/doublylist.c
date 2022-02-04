#include<stdio.h>
#include<stdlib.h>
void insertatend(int);
void insertatpos(int);
struct node
{
int data;
struct node *next;
struct node *prev;
}*head=NULL;
void main()
{
    struct node *newnode=malloc(sizeof(struct node));
int n,c,e;
do{
printf("your options are .....\n");
printf("1.insert at beginning..\n");
printf("2.insert at end..\n");
printf("3.insert at specified location..\n");
printf("4.delete at beginning..\n");
printf("5.delete at end..\n");
printf("6.delete at specified location..\n");
printf("7.traversal...\n");
printf("enter your option : ");
scanf("%d",&n);
switch(n)
{
case 1: printf("enter the value to be inserted: ");
        scanf("%d",&e);
        struct node *newnode=malloc(sizeof(struct node));
        newnode->data=e;
        newnode->prev=NULL;
        newnode->next=head;
        if(head!=NULL)
        head->prev=newnode;
        head=newnode;
        printf("one node inserted ....\n");
        break;

case 2: printf("enter the value to be inserted: \n");
        scanf("%d",&e);
        insertatend(e);
        break;

case 3: printf("enter the value to be inserted: \n");
        scanf("%d",&e);
        insertatpos(e);
        break;

case 4: if(head==NULL)
        printf("list is empty....");
        else{
            struct node *temp=head;
            head=temp->next;
            free(temp);
            printf("one element deleted....");
        }
        break;

case 5: if(head==NULL)
        printf("list is empty....");
        else{
            struct node *temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->prev->next=NULL;
            free(temp);
            printf("one element deleted....");
        }
        break;

case 6: if(head==NULL)
        printf("list is empty....");
        else{
                printf("enter data to be deleted : ");
        scanf("%d",&e);
            struct node *temp=head;
            while(temp->data!=e)
            {
                if(temp->next==NULL)
                {
                    printf("node not found...");
                    goto label;
                }
                else{
                    temp=temp->next;
                }
            }
            if(temp->prev==NULL && temp->next==NULL)
            {
                head=NULL;
                free(temp);
            }
             else if(temp->prev==NULL && temp->next!=NULL)
            {
                head=temp->next;
                head->prev=NULL;
                free(temp);
            }
             else if(temp->prev!=NULL && temp->next==NULL)
            {
                temp->prev->next=NULL;
                free(temp);
            }
             else{
                    temp->next->prev=temp->prev;
             temp->prev->next=temp->next;
             free(temp);
             }
        }
        printf("one element deleted....");
        label:
             break;

case 7: if(head==NULL)
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
}
printf("\n enter 0 to continue..: ");
scanf("%d",&c);
}while(c==0);
}
void insertatend(int e)
{
     struct node *newnode=malloc(sizeof(struct node));
     newnode->data=e;
        newnode->next=NULL;
        if(head==NULL)
        {
        newnode->prev=NULL;
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
        newnode->prev=temp;
        }
        printf("value insereted .....");
}

void insertatpos(int e)
{
     struct node *newnode=malloc(sizeof(struct node));
     int key;
     newnode->data=e;
     printf("enter the position to be inserted : ");
     scanf("%d",&key);
     if(head==NULL)
        printf("list is empty...");
     else{
        struct node *temp=head;

        while(temp->next!=NULL)
        {
            if(temp->data==key)
        {
            goto label;
        }
        else{
            temp=temp->next;
        }
        }
        label:
        if(temp->data==key)
        {
            newnode->next=temp->next;
            newnode->prev=temp;
            temp->next=newnode;
            temp=newnode->next;
            temp->prev=newnode;
            printf("one element inserted....");
        }
        else{
            printf("location not found....");
     }

     }
}
