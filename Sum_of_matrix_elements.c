#include<stdio.h>
int main()
{
    int c,r,a[100][100],i,j,sum=0;
    scanf("%d",&r);
    scanf("%d",&c);
    for(i=0;i<r;i++)
          {
              for(j=0;j<c;j++)
              {
                  scanf("%d",&a[i][j]);
              }
          }
    for(i=0;i<r;i++)
          {
              for(j=0;j<c;j++)
              {
                  sum+=a[i][j];
              }
          }
    printf("%d",sum);
}