#include<stdio.h>
int main()
{
    int n,i,arr[100],j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n-1;i++) 
    {
        c=0; 
        for(j=1;j<n-1;j++)
        {
            if(arr[j]%2==0 && arr[j+1]%2==0 && arr[j-1]%2==0) 
            {
                c++;
            }
        }
    } printf("%d",c);
    
}