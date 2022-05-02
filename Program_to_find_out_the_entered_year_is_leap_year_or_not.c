
#include<stdio.h>
int main()
{
    int yr;
    scanf("%d",&yr);
    if(yr%400==0)
    {
        printf("True");
    }
    else if(yr%100==0)
    {
        printf("False");
    }
    else if(yr%4==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
