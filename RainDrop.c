#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=3;i<8;i++)
    {
        if(n%i==0)
        {
            if(i==3)
            {
                printf("Pling");
                c++;
            }
            
             else if(i==5)
            {
                printf("Plang");
                c++;
            }
            
            else if(i==7)
            {
                printf("Plong");
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("%d",n);
    }
    
    return 0;
}