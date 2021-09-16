#include<bits/stdc++.h>
using namespace std;

void solve(string s)
{
    stack<char>t;
    for(int i=0;i<=s.size()-1;i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[') t.push(s[i]);
        else
        {
            if(t.empty())
            {
                cout<<"NO"<<endl;
                return;
            }
            else
            {
                if(t.top()=='('&&s[i]==')'||t.top()=='{'&&s[i]=='}'||t.top()=='['&&s[i]==']') t.pop();
                else
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    if(t.empty()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        solve(s);
    }
    return 0;
}
