#include<stdio.h>
int main()
{
    int n,i,j,a[100],k,c=0;
    scanf("%d",&n);
    for(j=0;j<n;j++)
         {
             scanf("%d",&a[j]);
             
         }
     scanf("%d",&k);    
    for(j=0;j<n;j++)
         {
             if(a[j]==k)
             {
                 c=1;
                 printf("%d ",j);
                 break;
             }
         }
    for(j=n-1;j>=0;j--)
         {
             if(a[j]==k)
             {
                 c=1;
                 printf("%d ",j);
                 break;
             }
         }
    if(c==0)
    {
        printf("-1 ");
    }
    if(c==0)
    {
        printf("-1 ");
    }
}