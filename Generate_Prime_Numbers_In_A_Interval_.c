#include<stdio.h>
int is_it_prime(int i)
{
    int k;
    for(k=2;k<i;k++)
    {
        if(i%k==0)
        {
            break;
        }
    }
    if(k==i)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
}
int main()
{
    int a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a+1;i<b;i++)
    {
        if(is_it_prime(i)==1)
        {
            printf("%d
",i);
        }
    }
    return 0;
}