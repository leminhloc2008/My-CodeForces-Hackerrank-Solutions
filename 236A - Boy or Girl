#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long j,t=0;
    string s;
    cin>>s;
    for(int i=0;i<=s.size()-1;i++)
    {
        j=i+1;
        do
        {
            if(s[i]==s[j]) s.erase(j,1);
            else j++;
        }
        while(j<=s.size());
    }
    t=s.size();
    if(t%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    if(t%2==1)
    {
        cout<<"IGNORE HIM!";
    }
   return 0;
}
