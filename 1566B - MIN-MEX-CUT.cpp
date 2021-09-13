#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long d0=0,d1=0,d=0;
        string s;
        cin>>s;
        for(int i=0;i<=s.size()-1;i++)
        {
            if(s[i]=='0'&&s[i]!=s[i+1]) d++;
        }
        cout<<min(d,2ll)<<endl;
    }
}
