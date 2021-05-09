#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k,n,w,s=0,x=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        s=s+i;
    }
    x=k*s;
    if(n>=x)
    {
        cout<<"0";
    }
    else
    {
        cout<<x-n;
    }
    return 0;
}
