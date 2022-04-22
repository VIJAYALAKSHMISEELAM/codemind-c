#include<stdio.h>
int main()
{
    int rev=0,num,d;
    scanf("%d",&num);
    while(num)
    {
        d=num%10;
        num=num/10;
        rev=rev*10+d;
    }
    printf("%d",rev);
    return 0;
    
}