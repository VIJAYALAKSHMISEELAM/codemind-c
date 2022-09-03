#include<stdio.h>
int main()
{
    int n,i,j,arr[100][100],res1=0,res2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                res1+=arr[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==n-j-1)
            {
                res2+=arr[i][j];
            }
        }
    }
    
    
    
    printf("Principal Diagonal:%d
",res1);
    printf("Secondary Diagonal:%d
",res2);
}