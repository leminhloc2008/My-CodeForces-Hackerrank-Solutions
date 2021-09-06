#include<bits/stdc++.h>
using namespace std;

long long d[10];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,s,kq=0;
    cin>>n>>s;
    long long zeroNum=0;
    if(s>9*n||n>1&&s<=1)
    {
        cout<<-1;
        return 0;
    }
    for(int i=9;i>=1;i--)
    {
        if(s>=2*i&&zeroNum<n/2)
        {
            d[i]=s/(2*i);
            zeroNum+=d[i];
            s=s%(2*i);
        }
    }
    for(int i=9;i>=0;i--)
    {
        if(d[i]>0)
        {
            for(int j=0;j<d[i];j++)
            {
                cout<<i;
            }
        }
    }
    for(int i=0;i<n/2-zeroNum;i++)
    {
        cout<<0;
    }
    if(n%2)
    {
        if(s!=0)
        {
            cout<<s;
        }
        else
        {
            cout<<0;
        }
    }
    for(int i=0;i<n/2-zeroNum;i++)
    {
        cout<<0;
    }
    for(int i=0;i<=9;i++)
    {
        if(d[i]>0)
        {
            for(int j=0;j<d[i];j++)
            {
                cout<<i;
            }
        }
    }
    return 0;
}

