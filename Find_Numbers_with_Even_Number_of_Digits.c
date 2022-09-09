#include<stdio.h>
int main()
{
    int n,i,c,out,a[100],temp;
    scanf("%d",&n);
    out=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        while(a[i])
        {
            a[i]/=10;
            c+=1;
        }
        if(c%2==0)
        {
            out+=1;
        }
    }

        printf("%d ",out);
    
}