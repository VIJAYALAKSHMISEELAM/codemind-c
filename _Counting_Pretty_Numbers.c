#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int d,l,r,c=0,i;
        scanf("%d",&l);
        scanf("%d",&r);
    for(i=l;i<=r;i++)
    {
        d=i%10;
        
            if(d==2||d==3||d==9)
            {
                c++;
            }
            else if(i==2||i==3||i==9)
            {
                c++;
            }
    }
            
      printf("%d
",c);  
    }
}