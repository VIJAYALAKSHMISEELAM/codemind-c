#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    a[j]=-j;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            printf("%d ",a[i]);
        }
    }
}