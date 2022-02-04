#include<stdio.h>
void uni(int,int);
int find(int);
int s[5]={-1,-1,-1,-1,-1};
void main()
{
int a,b,c;

printf("the universal set is : u={{1},{2},{3},{4}} \n");

printf("currently the rooots of 1 ,2 , 3 , 4 are :\n");
for(int i=1;i<5;i++)
{
    printf("%d ",s[i]);
}
label:
printf("\n enter the two set to joint : ");
scanf("%d%d",&a,&b);

uni(a,b);
printf("\n\n enter 0 to continue : ");
scanf("%d",&c);
if(c==0)
 goto label;
}
void uni(int a,int b)
{
    int x,y;
    x=find(a);
    y=find(b);
    if(x!=y){

        s[y]=x;
    }
    else
        printf("\nthese belong to same set \n");
    printf("\n the new roots of 1 2 3 4 after union of %d and %d are : \n",a,b);
for(int i=1;i<5;i++)
{
    printf("%d ",s[i]);
}

}
int find(int a)
{
    if(s[a]==-1)
        return a;
    else{


        find(s[a]);
    }

}

