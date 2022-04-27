#include<stdio.h>
int main()
{
    int n,i,sum=0,temp,a,rem;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        i=1;
        a=1;
        rem=n%10;
        for(i=1;i<=rem;i++)
        {
            a=a*i;
        }
        sum+=a;
        n=n/10;
    }
    n=temp;
    if(sum==n)
    {
        printf ("The number %d is a strong number",n);
    }
    else
    {
        printf ("The number %d is not a strong number",n);
        
    }
    return 0;
}