#include<stdio.h>
int main()
{
    int L,B,C,W,area,total;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    area=((L+(2*W))*(B+(2*W)))-(L*B);
    
    if(area<=0)
    {
        printf("Impossible");
    }
    else
    {
        total=area*C;
        printf("%d",total);
    }
    return 0;
}