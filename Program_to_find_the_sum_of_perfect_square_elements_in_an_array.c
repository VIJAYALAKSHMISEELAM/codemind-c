#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,sum=0,k;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=int(sqrt(a[i]));
        if(k*k==a[i])
        {
            sum+=a[i];
        }
    }
    printf("%d",sum);
}