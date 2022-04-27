#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin>>t;
    while(t--)
    {
        string a,b,s,t;
        cin>>a>>b;
        long long ucln=__gcd(a.size(),b.size());
        for(int i=1;i<=a.size()/ucln;i++)
        {
            s+=b;
        }
        for(int i=1;i<=b.size()/ucln;i++)
        {
            t+=a;
        }
        if(s==t)
        {
            cout<<s<<"\n";
        }
        else
        {
            cout<<-1<<"\n";
        }
    }
    return 0;
}
