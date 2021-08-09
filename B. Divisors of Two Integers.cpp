#include<bits/stdc++.h>
using namespace std;

long long a[1000005];
long long d[1000005];
long long luu[1000005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    long long x=a[n],y=1;
    for(int i=1;i<=n;i++)
    {
        if(x%a[i]==0&&luu[a[i]]==0)
        {
            luu[a[i]]=1;
        }
        else
        {
            d[y++]=a[i];
        }
    }
    sort(d+1,d+1+y);
    cout<<x<<" "<<d[y];
    return 0;
}
