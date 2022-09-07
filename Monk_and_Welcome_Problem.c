#include<stdio.h>
int main()
{
    int n,i,j,a[100],b[100],c[100];
    scanf("%d",&n);
    for(j=0;j<n;j++)
         {
             scanf("%d",&a[j]);
             
         }
    for(j=0;j<n;j++)
         {
             scanf("%d",&b[j]);
             
         }
    for(j=0;j<n;j++)
    {
        c[j]=a[j]+b[j];
    }
    
     for(j=0;j<n;j++)
         {
             printf("%d ",c[j]);
             
         }
}