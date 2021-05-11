#include<bits/stdc++.h>
using namespace std;
 
long long a[1000005];
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,s1=0,s2=0,count=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s1=s1+a[i];
    }
    sort(a+1,a+1+n);
    for(int i=n;i>=i;i--)
    {
        s2=s2+a[i];
        s1=s1-a[i];
        count++;
        if(s2>s1) break;
    }
    cout<<count;
    return 0;
