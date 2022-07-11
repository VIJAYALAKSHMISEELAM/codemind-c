#include<stdio.h>
int main()
{
    int i,j,m,n,a[100][100],sum=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) 
    {
        for(j=0;j<m;j++) 
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j || i+j==m-1)
            {
                sum+=a[i][j];  
            }
           
        } 
        
        
    } 
    printf("%d",sum);
}