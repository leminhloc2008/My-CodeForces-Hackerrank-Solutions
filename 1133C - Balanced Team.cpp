//linnk yêu tú
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    long long dem=0,kq=0,j=1;
    for(int i=1;i<=n;i++)
    {
        while(j<=n&&a[j]-a[i]<=5)
        {
            j++;
            kq=max(kq,j-i);
        }
    }
    cout<<kq;
}
