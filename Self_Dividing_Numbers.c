#include<stdio.h>
void fun(int i,int p,int k)
{
    int t,d;
    t=i;
    while(i) 
    {
        d=i%10;
        p++;
        if(d==0)
        {
            break;
        }
        if(t%d==0)
        {
            k++;
        }
        i=i/10; 
        
    } 
    if(p==k)
    {
        printf("%d ",t);
    }
    
}
int main()
{
    int n,i,m,p=0,k=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        p=0;
        k=0;
        fun(i,p,k);
    }
    
}