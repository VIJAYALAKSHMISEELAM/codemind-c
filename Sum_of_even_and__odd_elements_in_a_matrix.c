#include<stdio.h>
int main()
{
    int n,m,i,j,a[100][100],s=0,c=0; 
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) 
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]); 
            
        } 
    
    }
    for(i=0;i<n;i++) 
    { 
        for(j=0;j<m;j++)
        {
            if(a[i][j]%2==0)
            {
                s+=a[i][j];
            }
            else
            {
                c+=a[i][j];
            }
            
        } 
        
    } 
    printf("%d %d",s,c);
    
}