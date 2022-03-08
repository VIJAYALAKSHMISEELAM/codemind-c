#include<stdio.h>
int main()
{
    int n,d,temp,rev=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    n=temp;
    if(rev==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}