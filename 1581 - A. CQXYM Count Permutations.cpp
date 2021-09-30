#include<bits/stdc++.h>
using namespace std;
 
long long m=int(1e9+7);
 
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,kq=1;
        cin>>n;
        for(int i=3;i<=2*n;i++)
        {
            kq=(kq*i)%m;
        }
        cout<<kq%m<<endl;
    }
    return 0;
}
