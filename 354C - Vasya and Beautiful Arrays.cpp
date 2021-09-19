#include<bits/stdc++.h>
using namespace std;

long long a[1000005],d[1000005],t[1000005];

int kt(long long id,long long mMax,long long k,long long n)
{
    long long dem=0;
    for(int i=1;i*id<=mMax;i++)
    {
        dem+=t[min(i*id+k,mMax)]-t[i*id-1];
    }
    if(dem==n) return true;
    else return false;
}

int main()
{
    long long n,k,mMin=0,mMax=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        d[a[i]]++;
    }
    mMin=a[1];
    mMax=a[1];
    for(int i=1;i<=n;i++)
    {
        if(mMax<a[i]) mMax=a[i];
        else if(mMin>a[i]) mMin=a[i];
    }
    for(int i=1;i<=mMax;i++)
    {
        t[i]=t[i-1]+d[i];
    }
    if(mMin<=k+1) cout<<mMin;
    else
    {
        for(int i=mMin;i>=1;i--)
        {
            if(kt(i,mMax,k,n))
            {
                cout<<i;
                break;
            }
        }
    }
    return 0;
}
