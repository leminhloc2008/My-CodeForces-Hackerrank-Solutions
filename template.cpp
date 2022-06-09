#include<bits/stdc++.h>
using namespace std;

long long tinhTich(long long a,long long n,long long m)
{
    if(n==0) return 0;
    if(n==1) return a;
    long long t=tinhTich(a,n/2,m)%m;
    if(n%2==0)
        return t*2%m;
    if(n%2==1)
        return (t*2%m+a)%m;
}

long long tinhMu(long long arr,long long n,long long m)
{
    if(n==0) return 1;
    if(n==1) return arr;
    long long t=tinhMu(arr,n/2,m)%m;
    long long tich=tinhTich(t,t,m);
    if(n%2==0)
        return tich%m;
    if(n%2==1)
        return tinhTich(tich,arr,m);
}

long long kiemTraMilnerRabin(long long n, long long k=10)
{
    if(n<2)
    {
        return false;
    }
    if(n!=2&&n%2==0)
    {
        return false;
    }
    long long d=n-1;
    while(d%2==0)
    {
        d/=2;
    }
    for(int i=1;i<=k;i++)
    {
        long long a=rand()%(n-1)+1,t=d,modVal=tinhMu(a,t,n);
        while(t!=n-1&&modVal!=1&&modVal!=n-1)
        {
            modVal=tinhTich(modVal,modVal,n);
            t*=2;
        }
        if(modVal!=n-1&&t%2==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long a,b;
    cin>>a;
    if(kiemTraMilnerRabin(a))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
