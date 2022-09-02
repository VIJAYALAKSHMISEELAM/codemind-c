#include<stdio.h>
int main()
{
    int n,arr[100],t,i,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=t)
        {
            c+=1;
        }
        else
        {
            c+=2;
        }
    }
    printf("%d",c);
    
}