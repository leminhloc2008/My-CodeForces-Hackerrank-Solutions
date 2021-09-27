#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,dem=0;
    cin>>n;
    long long a[n+1],b[n+1],c[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        c[i]=a[i]-b[i];
    }
    sort(c+1,c+1+n);
    int i=1;
    for(int j=n;j>=1;j--)
    {
        while(c[i]+c[j]<=0&&j>i)
        {
            i++;
        }
        if(c[i]+c[j]>0) dem+=j-i;
    }
    cout<<dem;
}
