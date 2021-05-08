#include<bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    string a;
    string b;
    cin>>a;
    b="hello";
    int j=0;
    for (int i=0;i<=a.size()-1;i++)
    {
        if (a[i]==b[j])
        {
            j++;
        if (j>b.size()-1)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    }
    cout<<"NO"<<endl;
}
int main()
{
    solve();
    return 0;
}
