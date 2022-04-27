#include<bits/stdc++.h>
using namespace std;

//start template
//author: n2loclm
long long a[10000005];
long long b[10000005];
//kiem tra so nguyen to
int ktNguyenTo(long long n)
{
    long long i;
    if (n<2) return 0;
	if (n==2) return 1;
    for (i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    if (n%i!=0) return 1;
}
//sang nguyen to
long long nguyento[2000005];
long long m=int(1e9+7);
void sang()
{
    nguyento[0]=nguyento[1]=1;
    for(int i=2;i*i<=m;i++)
    {
        if(nguyento[i]==0)
        {
            for(int j=i*i;j<=m;j+=i)
            {
                nguyento[j]=1;
            }
        }
    }
}
//doi string sang so
long long stringToInt(string s)
{
    long long t=0;
    for(int i=0;i<=s.size()-1;i++) t=t*10+(s[i]-48);
    return t;
}
//tinh mu
long long tinhmu(long long arr,long long n)
{
    if(n==0) return 1;
    if(n==1) return arr;
    long long t=tinhmu(arr,n/2);
    if(n%2==0)
        return t*t%m;
    if(n%2==1)
        return t*t%m*arr%m;
}
//tong chu so cua n
int tongcs(long long n)
{
    long long s=0;
    while(n>0)
          (s=s+n%10,n=n/10);
    return s;
}
// phan tich thua so nguyen to
long long dem[2000005];

void pttsnt(long long n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            dem[i]++;
            n=n/i;
        }
    }
    if(n!=1)
    {
        dem[n]++;
    }
}
//dem chu so cua n
int demcs(long long n)
{
    long long dem=0;
    while(n>0)
          (n=n/10,dem++);
    return dem;
}
//tinh tong uoc so
int demuocso(long long n)
{
    long long count=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count+=i;
            long long k=n/i;
            if(k!=i) count++;
        }
    }
    return count;
}
// dao nguoc so
int daonguocso(long long n)
{
    long long k=0,t=0;
    while(n!=0)
    {
        k=n%10;
        t=t*10+k;
        n/=10;
    }
    return t;
}
// dem so chia het cho m trong doan a den b
int demChiaHet(long long a,long long b,long long m)
{
    if(a%m==0)
    {
        return (b/m)-(a/m)+1;
    }
    return (b/m)-(a/m);
}

// sàng ước
long long mod=1e6,d[int(1e6)+5];

void preProcess()
{
    for(int i=1;i<=mod;i++)
    {
        d[i]=1;
    }
    for(int i=2;i<=mod;i++)
    {
        for(int j=i;j<=mod;j+=i)
        {
            d[j]+=i;
        }
    }
}

// tổng đoạn con lớn nhất
int maxSubArray(long long n, long long a[])
{
    long long temp=0,tong=-1e9;
    for(int i=1;i<=n;i++)
    {
        temp=temp+a[i];
        if(tong<temp)
        {
            tong=temp;
        }
        if(temp<0)
        {
            temp=0;
        }
    }
    return tong;
}
//end template

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t=1;
    while(t--)
    {
        long long n;
        cin>>n;
    }
    return 0;
}
