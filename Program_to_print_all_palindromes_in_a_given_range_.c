#include<stdio.h>
int main()
{
    int l,h,i,temp,d,rev;
    scanf("%d %d",&l,&h);
    for(i=l;i<h;i++)
    {
        rev=0;
        temp=i;
        while(i)
        {
            d=i%10;
            i=i/10;
            rev=(rev*10)+d;
        }
        i=temp;
        if(rev==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}