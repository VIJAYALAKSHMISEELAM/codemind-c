#include<stdio.h>
int strictly_even(int*arr,int n)
{
    int i,c=0,d=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0 && arr[i]%2==0)
        {
            c+=1;
        }
        if(arr[i]%2==0)
        {
            d+=1;
        }
    }
        if(c==d)
        {
            return 1;
        }
        return 0;
    
}
int main()
{
    int arr[100];
    int n,i;
    scanf("%d",&n);
     //dont wite as n/2 +1 beacause it is wrong
    //reason is :size 7 ayithe 4 places even size 8 ayina 
    //4 places answer so (n+1)/2 lo ayithe correct ga vasthadi
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(strictly_even(arr,n))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}