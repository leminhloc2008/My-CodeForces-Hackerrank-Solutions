#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,kq=1e9,dem=0,luu;
    string s;
    cin>>n>>s;
    string led[6]={"GRB", "GBR", "RGB", "RBG", "BGR", "BRG"};
    string res;
    for(auto i:led)
    {
        string leddep=i;
        while(leddep.size()<n)
        {
            leddep=leddep+leddep;
        }
        int d=0;
        for(int j=0;j<n;j++)
        {
            if(s[j]!=leddep[j])
            {
                d++;
            }
        }
        if(kq>d)
        {
            kq=d;
            res=leddep.substr(0,n);
        }
    }
    cout<<kq<<endl<<res;
    return 0;
}


