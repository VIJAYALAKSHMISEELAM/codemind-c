#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}