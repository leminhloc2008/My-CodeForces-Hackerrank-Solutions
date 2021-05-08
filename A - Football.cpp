#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long dem=0;
    string s;
    cin>>s;
    for(int i=0;i<=s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            dem++;
        }
        else
        {
            dem=0;
        }
        if(dem>=6)
        {
            break;
        }
    }
    if(dem>=6)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";   
    }
}
