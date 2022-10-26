//odd+eve = odd
#include<stdio.h>
#include<math.h>
int main()
{
    int l,r,od=0,ev=0,sum=0;
    scanf("%d",&l);
    scanf("%d",&r);
    for(int i=l;i<=r;i++)
    {
        if(i%2!=0)
        {
            od+=1;
        }
        else
        {
            ev+=1;
        }
    }
    sum=(od)+(od*ev);
    printf("%d",sum);
    
    
}