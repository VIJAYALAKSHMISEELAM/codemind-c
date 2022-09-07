#include<stdio.h>
int main()
{
    int n,i,j,a[100];
    scanf("%d",&n);
    for(j=0;j<n;j++)
         {
             scanf("%d",&a[j]);
             
         }
    for(j=0;j<n;j++)
         {
             for(i=j+1;i<n;i++)
          {
             if(a[j]==a[i])
             {
                 printf("%d",a[j]);
                 break;
             }
             
          }
    
             
             
         }
    
}