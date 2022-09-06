#include<stdio.h>
int main()
{
    int r,c,a[100][100],max,i,j;
    scanf("%d",&r);
     scanf("%d",&c);
     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
     for(i=0;i<c;i++)
     {
         max=0;
         for(j=0;j<r;j++)
         {
             if(a[j][i]>max)
             {
                 max=a[j][i];
             }
         }
         printf("%d
",max);
     }
}