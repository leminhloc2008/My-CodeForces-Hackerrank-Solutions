#include<bits/stdc++.h>
using namespace std;

bool solve(long long l,long r,string s)
{
    if (l>r) return true;
    if (s[l]=='a'+(r - l))
    {
        return solve(l+1,r,s);
    }
    if(s[r]=='a'+(r-l))
    {
        return solve(l,r-1,s);
    }
    return false;
}

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long long l=1,r=s.size();
        if(solve(0,s.size()-1,s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
