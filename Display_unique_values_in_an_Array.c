#include<stdio.h>
int main()
{
    int n,i,c,j,a[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            k=1;
            printf("%d ",a[i]);
        }
        
    }
    if(k==0)
    {
        printf("-1");
    }

        
    
}