#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*top=NULL,*temp;
void main()
{
    int value,choice,c;
        do{
printf("...... your options are ......\n\n");
printf("1.insert (push) \n");
printf("2.delete (pop) \n");
printf("3.peak (top)\n");
printf("4.traversal \n");
printf("enter your option : ");
scanf("%d",&c);
switch(c)
{
case 1:printf("enter the value to be inserted :" );
    scanf("%d",&value);
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=value;
    if(top==NULL)
        {
            newnode->next=NULL;
            top=newnode;
        }
    else
        {

            newnode->next=top;
            top=newnode;
        }
        printf("value inserted successfully \n");
        break;
case 2:if(top==NULL)
        printf("stack is empty \n");
        else
        {
            temp=top;
            top=temp->next;
            free(temp);
        }
        printf("value deleted successfully \n");
        break;
case 3:printf("the top of the element is %d \n",top->data);
        break;
case 4: if(top==NULL)
            printf("\n stack is empty \n");
            else
            {
            temp=top;
            printf("\n stack elements are : \n");
            while(temp->next!=NULL)
            {
            printf("%d --> ",temp->data);
            temp=temp->next;
            }
            printf(" %d -->NULL \n",temp->data);
            }

            }
printf("\n enter 0 to continue \n");
scanf("%d",&choice);
}while(choice==0);
 }

