#include<stdio.h>
int main()
{
    int n,c=0,d,a=0,ite=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        if(d%2==0)
        {
            c++;
        }
        else
        {
            a++;
        }
        n=n/10;
        ite++;
    }
    if(c==ite)
    {
        printf("Even");
    }
    else if(a==ite)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
    return 0;
}