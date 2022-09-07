#include<stdio.h>
int main()
{
    int n,i,j,a[100],pr;
    scanf("%d",&n);
    for(j=0;j<n;j++)
         {
             scanf("%d",&a[j]);
             
         }
    for(i=0;i<n;i++)
    {
        pr=1;
         for(j=0;j<n;j++)
         {
             if(i==j)
             {
                 continue;
             }
             else
             {
                 pr*=a[j];
             }
             
         }
        printf("%d ",pr);
    }
    
    
}