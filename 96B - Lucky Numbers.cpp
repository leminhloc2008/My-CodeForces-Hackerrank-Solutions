#include<bits/stdc++.h>
using namespace std;

#define int long long

vector<long long>v;

void dq(long long n,long long d4,long long d7)
{
    if(n>=1e10) return;
    if(d4==d7&&n>1)
    {
        v.push_back(n);
    }
    dq(n*10+4,d4+1,d7);
    dq(n*10+7,d4,d7+1);
}

int binarySearch(long long n)
{
    long long l=0,r=v.size(),ans=v.size();
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(v[mid]>=n)
        {
            r=r-1;
            ans=min(ans,mid);
        }
        else
        {
            l=l+1;
        }
    }
    return ans;
}

signed main()
{
    dq(0,0,0);
    sort(v.begin(),v.end());
    int t=1;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<v[binarySearch(n)]<<endl;
    }
    return 0;
}
