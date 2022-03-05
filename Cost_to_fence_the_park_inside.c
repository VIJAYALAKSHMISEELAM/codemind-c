#include<stdio.h>
int main()
{
    int L,B,W,C,area,total;
    scanf("%d",&L);
    scanf("%d",&B);
    scanf("%d",&W);
    scanf("%d",&C);
    
    if(L<=(2*W)||B<=(2*W))
    {
        printf("Impossible");
    }
    else
    {
       area=L*B-((L-(2*W))*(B-(2*W)));
       total=area*C;
       printf("%d",total);
       
    }
    return 0;
}