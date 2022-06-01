#include<stdio.h>
int main()
{
    int i,j,n,half;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=n-1;j>=(n/2);j--)
    {
        printf("%d ",a[j]);
    }
    for(i=0;i<(n/2);i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}