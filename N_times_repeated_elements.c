#include<stdio.h>
int main()
{
    int n,i,arr[100],k,m,c,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]!=-1) 
        {
            c=1;
            for(j=0;j<n;j++)
            {
                if(arr[i]==arr[j] && i!=j)
                {
                    c++; 
                    arr[j]=-1; 
                    
                } 
                
            } 
            if(c==k) 
            {
                printf("%d ",arr[i]);
                m++; 
                
            } 
            
        } 
        
    } 
    if(m==0)
    {
        printf("-1");
    }

}