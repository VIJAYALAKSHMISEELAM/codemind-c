#include<stdio.h>
int main()
{
    int i,j,m,n,a[100][100],sum=0,max,sum2=0,max2;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) 
    {
        for(j=0;j<m;j++) 
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        sum2=0;
        for(i=0;i<n;i++)
        {
            sum2+=a[i][j]; 
            
        } 
        printf("%d ",sum2);
        
    } 
    
}