#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n1=0,n2=1;
    string s;
    cin>>s;
    while(n2<s.size())
    {
        if(s[n2]==s[n2-1])
        {
            n1++;
            s.erase(n2-1,2);
            n2=n2-2;
        }
        n2++;
    }
    if(n1%2!=0) cout<<"Yes";
    else cout<<"No";
    return 0;
}
