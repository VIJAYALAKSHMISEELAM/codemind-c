#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rev=0;
    int d=0;
    int temp = n;
    int c=0;
    while(n!=0)
    {
        d = n%10;
        rev=(rev*10)+d;
        n/=10;
        c+=1;
    } 
    int k = 3*pow(10,c-1);
    while(rev!=0)
    {
        if(rev%10 == 6)
        {
             temp+=k;
             break;
        }
        else
        {
            k/=10;
        }
        rev/=10;
    }
    cout<<temp;
    return 0;
}