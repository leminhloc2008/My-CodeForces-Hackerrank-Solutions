#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<long long>s;
    stack<long long>m;
    m.push(0);
    long long q;
    cin>>q;
    while(q--)
    {
        long long dk,x;
        cin>>dk;
        if(dk==1)
        {
            cin>>x;
            if(x>=m.top())
            {
                m.push(x);
            }
            s.push(x);
        }
        if(dk==2)
        {
            if(s.top()==m.top())
            {
                m.pop();
            }
            s.pop();
        }
        if(dk==3)
        {
            cout<<m.top()<<endl;
        }
    }
}
