#include<stdio.h>
int main()
{
    int l,r,i,k,c=0;
    scanf("%d",&l);
    scanf("%d",&r);
    scanf("%d",&k);
    for(i=l;i<=r;i++)
    {
        if(i%k==0)
        {
            c=c+1;
        }
    }
    printf("%d",c);
    return 0;
}