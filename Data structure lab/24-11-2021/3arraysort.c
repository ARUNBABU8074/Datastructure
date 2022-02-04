#include<stdio.h>
void main()
{
    int i,j,l1,l2,l3,k=0;
    printf("enter the limit of the first array: ");
    scanf("%d",&l1);
    int a[l1];
    printf("enter the sorted array elements :\n");
    for(i=0;i<l1;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("enter the limit of the second array: ");
    scanf("%d",&l2);
    int b[l2];
    printf("enter the sorted array elements :\n");
    for(j=0;j<l2;j++)
    {
        scanf("%d",&b[j]);
    }
    l3=l1+l2;
    int c[l3];

    for(i=0;i<l1;i++)
    {
        c[i]=a[i];
    }
for(j=0;j<l2;j++)
    {
        c[j+l1]=b[j];
    }
    for(i=0;i<l3;i++)
        {
            for(j=0;j<l3;j++)
            {
            if(c[i]<c[j])
            {
            int temp=c[i];
            c[i]=c[j];
            c[j]=temp;
            }
            }
        }

         /*for(i=0,j=0;i<l1 && j<l2;)
    {
            if(a[i]<b[j])
            {
            c[k]=a[i];
            k++;
            i++;
            }

            else
            {
                c[k]=b[j];
                k++;
                j++;
        }
    }

    while(i<l1)
    {
        c[k]=a[i];
        k++;
        i++;
    }
      while(j<l2)
    {
        c[k]=b[j];
        k++;
        j++;
    } */
    printf("\n the new merged soarted array is : \n");
    for(k=0;k<l3;k++)
        printf("%d ",c[k]);
}
