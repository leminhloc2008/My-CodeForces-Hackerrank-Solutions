#include<bits/stdc++.h>
using namespace std;

long long a[1000005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,cnteven=0,cntodd=0,oddindex=0,evenindex=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            cnteven++;
            evenindex=i;
        }
        if(a[i]%2!=0)
        {
            cntodd++;
            oddindex=i;
        }
    }   
    if(cntodd==1) cout<<oddindex;
    if(cnteven==1) cout<<evenindex;
    return 0;
}
