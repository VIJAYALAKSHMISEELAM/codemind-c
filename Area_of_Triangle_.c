#include<stdio.h>
#include<math.h>
int main()
{
    float s,a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    a=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",a);
    return 0;
}