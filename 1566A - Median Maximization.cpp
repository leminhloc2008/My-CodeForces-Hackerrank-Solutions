#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        long long m=n-(n+1)/2+1;
        cout<<s/m<<endl;
    }
}
