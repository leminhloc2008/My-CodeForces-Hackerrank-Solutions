#include<bits/stdc++.h>
using namespace std;

int timMax(stack<long long>s)
{
    long long m=s.top();
    long long n;
    while (!s.empty())
    {
        n=s.top();
        if(m<n) m=n;
        s.pop();
    }
    return m;
}

int main()
{
    stack<long long>s;
    long long q;
    cin>>q;
    while(q--)
    {
        long long dk,x;
        cin>>dk;
        if(dk==1)
        {
            cin>>x;
            s.push(x);
        }
        if(dk==2)
        {
             s.pop();
        }
        if(dk==3)
        {
            cout<<timMax(s)<<endl;
        }
    }
}
