#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long long n,count=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<=s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }
    cout<<count;
}
