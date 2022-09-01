#include<stdio.h>
int main()
{
    int l,n,w,h;
    scanf("%d",&l);
    scanf("%d",&n);
    while(n)
    {
        int w,h;
        scanf("%d",&w);
        scanf("%d",&h);
        if(w<l or h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else
        {
            if(w==h)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
        n-=1;
        
    }
}