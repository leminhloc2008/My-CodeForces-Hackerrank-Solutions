#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    long long b[8],mMin=0,t;
    cin>>t;
    while(t--)
    {
        for(int i=1;i<=7;i++)
        {
            cin>>b[i];
        }
        cout<<b[1]<<" "<<b[2]<<" "<<b[7]-b[2]-b[1]<<endl;
    }
}
