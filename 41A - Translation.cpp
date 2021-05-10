#include<bits/stdc++.h>
using namespace std;
 
string reverse(string s) 
{
    string temp;
    for (int i=s.size()-1;i>=0;i--) 
    {
        temp.push_back(s[i]);
    }
    return temp;
}
 
int main()
{
    string s,t;
    cin>>s>>t;
    if(t==reverse(s))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
