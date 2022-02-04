#include<stdio.h>
void main()
{
    int l1,l2,i,op,flag=0;
    printf("enter the length of first set :");
    scanf("%d",&l1);
    printf("enter the length of second set :");
    scanf("%d",&l2);
    int a[l1],b[l2],c[l1];
    if(l1!=l2)
    {
    printf("the length of the set must be equal for bitwise operations... ");
    }
    else
    {

        printf("enter the elements of first set (only 1 & 0):\n");
        for(i=0;i<l1;i++)
        {
            scanf("%d",&a[i]);
        }
         printf("enter the elements of second set (only 1 & 0) :\n");
        for(i=0;i<l1;i++)
        {
            scanf("%d",&b[i]);
        }
        label:
        printf("\n your options are .....\n");
        printf("1.UNION \n 2.INTERSECTION \n 3.DIFFERENCE \n 4.EQUALENCE \n 5.EXIT \n");
        printf("enter your option : \n");
        scanf("%d",&op);
        switch(op)
        {

    case 1 : printf("\n\n the union of the set is : \n\n");
            for(i=0;i<l1;i++)
                {
                c[i]=a[i] || b[i];
                printf("%d",c[i]);
                }
                goto label;
    case 2: printf("\n\n the intersection of the set is : \n\n");
            for(i=0;i<l1;i++)
                {
                    c[i]= a[i] && b[i];

                    printf("%d",c[i]);
                }
                goto label;
    case 3:  printf("\n\n set1 difference set2 is : \n\n");
        for(i=0;i<l1;i++)
                {

                    c[i]=a[i]&&  !b[i];
                    printf("%d",c[i]);
                }
                goto label;
    case 4: for(i=0;i<l1;i++)
                {
                  if(a[i]==b[i])
                    flag=flag+1;
                }
                if(flag==l1)
                    printf("\n \n these two sets are equal ... \n\n");
                else
                    printf("\n\n sets not equal ....\n\n");
                goto label;
case 5 : break;
    }

    }
}

