
#include<stdio.h>
#include<math.h>
int main()
{
    int a,d,num,sq,sum=0;
    scanf("%d",&a);
    sq=pow(a,2);
    num=sq;
    while(num!=0)
    {
        d=num%10;
        num=num/10;
        sum=sum+d;
    }
    if(sum==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}
