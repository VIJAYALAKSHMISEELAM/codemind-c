#include<stdio.h>
int main()
{
    int i,a[100],b[100],al=0,bo=0;
    int n=3;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            al+=1;
        }
        else if(a[i]<b[i])
        {
            bo+=1;
        }
    }
    printf("%d ",al);
    printf("%d ",bo);
}