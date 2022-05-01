
#include<stdio.h>
int main()
{
    int sum=0,temp,a,d;
    scanf("%d",&a);
    temp=a;
    while(a!=0)
    {
        d=a%10;
        a=a/10;
        sum=sum+d;
    }
    if(temp%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
