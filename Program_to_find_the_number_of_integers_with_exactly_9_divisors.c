#include<stdio.h>
int main()
{
    int n,i,c=0,b=0,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==9)
        {
            b++;
            printf("%d ",i);
        }
        c=0;
    }
    printf("
");
    printf("Total=%d",b);
    return 0;
    
}