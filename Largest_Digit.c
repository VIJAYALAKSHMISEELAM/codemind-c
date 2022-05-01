
#include<stdio.h>
int main()
{
    int n,d,lar=0;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        if(lar<d)
        {
            lar=d;
        }
        n=n/10;
    }
    printf("%d",lar);
    return 0;
}
