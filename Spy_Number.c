
#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,product=1,temp,d;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        
        d=n%10;
        sum=sum+d;
        n=n/10;
        
    }
    n=temp;
    while(n)
    {
        d=n%10;
        product=product*d;
        n=n/10;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
    
    
    
}

