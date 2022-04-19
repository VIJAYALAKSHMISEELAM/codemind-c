
#include<stdio.h>
int main()
{
    int a,b,c;
    int arr[6]={10,9,8,7,6,5};
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>50&&b>60&&c>100)
    {
        printf("%d",arr[0]);
    }
    else if(a>50&&b>60)
    {
        printf("%d",arr[1]);
    }
    
    else if(b>60&&c>100)
    {
       printf("%d",arr[2]); 
    }
    else if(a>50&&c>100)
    {
        printf("%d",arr[3]); 
    }
    else if(a>50||b>60||c>100)
    {
        printf("%d",arr[4]); 
    }
    else
    {
        printf("%d",arr[5]); 
    }
    return 0;
}
