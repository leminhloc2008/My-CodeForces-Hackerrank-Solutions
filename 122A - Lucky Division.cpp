#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin>>n;
    if(n%4==0||n%7==0||n%47==0||n%74==0||n%44==0||n%444==0||n%447==0||n%474==0||n%477==0||n%777==0||n%774==0||n%744==0)
    {
        cout<<"YES";
        return 0;
    }
    else
    {
        cout<<"NO";
        return 0;
    }
    return 0;
}
