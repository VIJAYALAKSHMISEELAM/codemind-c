#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    a=0,b=1;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=1;i<n-1;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    /*if n=10 already we tooka,b so we need extra 8 values 
    in series so we took  (i<n-1) in for- loop n-1 means 9 
    so <n-1 means upto 8
    */
    
    return 0;
}