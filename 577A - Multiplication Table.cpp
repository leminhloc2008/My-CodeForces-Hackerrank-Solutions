#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,x,dem=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        if(x%i==0&&x/i<=n)
        {
            dem++;
        }
    }
    cout<<dem;
    return 0;
}
