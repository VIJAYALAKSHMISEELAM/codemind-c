#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("Ugly Number");
        goto label;
    }
    if( n>0 && (n%2==0 || n%3==0 || n%5==0))
    {
        if(n%7!=0)
        {
            printf("Ugly Number");
        }
    }
    else
    {
        printf("Not Ugly Number");
    }
    label:
    return 0;
}