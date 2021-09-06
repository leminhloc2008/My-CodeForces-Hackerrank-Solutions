#include<bits/stdc++.h>
using namespace std;

long long d[1000005];

int main()
{
    long long n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        long long x;
        cin>>x;
        d[x]++;
    }
    for(int day=100;day>=1;day--)
    {
        long long sum=0;
        for(int food=1;food<=100;food++)
        {
            sum+=d[food]/day;
        }
        if(sum>=n)
        {
            cout<<day;
            return 0;
        }
    }
    cout<<0;
}
