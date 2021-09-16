#include<bits/stdc++.h>
using namespace std;

int tinhTong(queue<long long>s)
{
    long long tong=0;
    while(!s.empty())
    {
        tong+=s.front();
        s.pop();
    }
    return tong;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    bool dkDung=false;
    queue<long long>s1,s2,s3;
    long long n1,n2,n3;
    cin>>n1>>n2>>n3;
    for(int i=1;i<=n1;i++)
    {
        long long x;
        cin>>x;
        s1.push(x);
    }
    for(int i=1;i<=n2;i++)
    {
        long long x;
        cin>>x;
        s2.push(x);
    }
    for(int i=1;i<=n3;i++)
    {
        long long x;
        cin>>x;
        s3.push(x);
    }
    //cout<<s1.front()<<" "<<s2.front()<<" "<<s3.front();
    //cout<<tinhTong(s1);
    long long t1=tinhTong(s1),t2=tinhTong(s2),t3=tinhTong(s3),kq=0;
    while(!dkDung)
    {
        long long maxTong=max(t1,max(t2,t3));
        if(t1==t2&&t2==t3)
        {
            kq=t1;
            dkDung=true;
        }
        if(t1==maxTong)
        {
            t1-=s1.front();
            s1.pop();
        }
        else if(t2==maxTong)
        {
            t2-=s2.front();
            s2.pop();
        }
        else if(t3==maxTong)
        {
            t3-=s3.front();
            s3.pop();
        }
    }
    cout<<kq;
    return 0;
}
