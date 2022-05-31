#include<stdio.h>
int main()
{
    int n,c=0,d;
    scanf("%d",&n);
   while(n)
    {
        d=n%10;
        c++;
        n=n/10;
        if(d==0 && c==10)
        {
            printf("invalid");
            goto label;
        }
    }
    if(c==10 || c==9)
    {
        printf("Valid");
    }
    
    else
    {
        printf("Invalid");
    }
    label:
    return 0;
}