#include<stdio.h>
int strictly_odd(int*arr,int n)
{
    int i,c=0,d=0;
    for(i=0;i<n;i++)
    {
        if(i%2!=0 && arr[i]%2!=0)
        {
            c+=1;
        }
        if(arr[i]%2!=0)
        {
            d+=1;
        }
    }
        if(c==d)
        {
            return 1;
        }
        return 0;
    
}
int main()
{
    int arr[100];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(strictly_odd(arr,n))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}