#include<bits/stdc++.h>
using namespace std;
 
long long a[1000005];
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,k,dem=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>=a[k]&&a[i]>0)
        {
            dem++;
        }
    }
    cout<<dem;
    return 0;
}
