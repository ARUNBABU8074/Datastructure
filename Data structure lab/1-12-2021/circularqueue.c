#include<stdio.h>
void main()
{
    int n,l,c,front=-1,rear=-1,i;
    printf("enter limit of the queue: ");
    scanf("%d",&l);
    int a[l];
    do{
    printf(" .....your queue options are !!!!!!");
printf("1.insertion \n");
printf("2.deletion \n");
printf("3.traversal \n");
printf("enter your choice: ");
scanf("%d",&c);
switch(c)
{
case 1:if(front==(rear+1)%l)
            printf("queue is full sorry .....");
            else{
                printf("enter the value to be inserted : ");
            scanf("%d",&n);
                if(front==-1)
                {
                    front=0;
                    rear=0;
                    a[rear]=n;
                }
                else{

                    if(rear==l-1)
                        rear=0;
                    else
                        rear=rear+1;

                a[rear]=n;
                }
                printf(" value inserted successfully .....");
            }
            break;
case 2:if(front==-1)
        printf("queue is empty ......");
        else{
    if(front!=rear)
                {
            if(front==l-1)
                   front=0;
              else
                front=front+1;
                }
            else{
                front=-1;
                rear=-1;
                }

            printf("value deleted successfully.....");
        }

        break;
case 3:if(front!=-1)
        {
            i=front;
            while(i!=rear)
            {
            printf("%d ",a[i]);
            i=i+1;

            if(i>l-1)
                {
                    i=0;

                }

        }
        printf("%d",a[rear]);
        }
        if(front==-1)
            printf("queue is empty");
        break;
}
printf("\n enter 0 to continue \n");
scanf("%d",&c);
}while(c==0);
}
