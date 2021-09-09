#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,x,tong=0,t;
    cin>>t;
    while(t--)
    {
        tong=0;
        bool dkDung=false;
        cin>>n>>x;
        long long a[n],b[n];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
            tong+=a[i];
        }
        while(!dkDung)
        {
            for(int i=1;i<=n;i++)
            {
                if(a[i]%x==0)
                {
                    tong+=b[i];
                    a[i]=a[i]/x;
                }
                else
                {
                    dkDung=true;
                    break;
                }
            }
        }
        cout<<tong<<endl;
    }

    return 0;
}

