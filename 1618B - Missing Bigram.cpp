#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string bigrams[n-2];
        for(int i=0;i<n-2;i++)
        {
            cin>>bigrams[i];
        }
        string missingBigrams=bigrams[0];
        for(int i=1;i<n-2;i++)
        {
            if(bigrams[i][0]!=bigrams[i-1][1])
            {
                missingBigrams=missingBigrams+bigrams[i];
            }
            else
            {
                missingBigrams=missingBigrams+bigrams[i][1];
            }
        }
        if(missingBigrams.size()!=n)
        {
            missingBigrams=missingBigrams+'b';
        }
        cout<<missingBigrams<<endl;
    }
    return 0;
}

