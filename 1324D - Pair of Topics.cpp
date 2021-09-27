#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,l,r,dem=0,left,right;
        cin>>n>>l>>r;
        long long a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+1+n);
        left=1;
        right=n;
        while(left<right)
        {
            if(a[left]+a[right]<=r)
            {
                dem=dem+(right-left);
                left++;
            }
            else
            {
                right--;
            }
        }
        left=1;
        right=n;
        while(left<right)
        {
            if(a[left]+a[right]<l)
            {
                dem=dem-(right-left);
                left++;
            }
            else
            {
                right--;
            }
        }
        cout<<dem<<endl;
    }
    return 0;
} 
