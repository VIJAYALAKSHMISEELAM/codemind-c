#include<stdio.h>
int fun(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    else
    {
        return fun(n-1)+fun(n-2)+fun(n-3);
    }
}
int main()
{
    int distance,res;
    scanf("%d",&distance);
    res=fun(distance);
    printf("%d",res);
    return 0;
}