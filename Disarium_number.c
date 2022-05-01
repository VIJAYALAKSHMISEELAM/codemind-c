
#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp=0,count=0,d,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        count++;
    }
    n=temp;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        sum=sum+pow(d,count);
        count--;
    }
    if(sum==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
   return 0; 
    
}
