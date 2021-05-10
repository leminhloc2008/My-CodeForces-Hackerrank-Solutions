/* Solution 1: ( Time limit exceeded on test 5 )
We have: f(4) =  - 1 + 2 - 3 + 4 
     <=> f(4) =  - 1 - 3 + 2 + 4 
         f(5) =  - 1 + 2 - 3 + 4 - 5 
     <=> f(5) =  - 1 - 3 - 5 + 2 + 4 
     => We will calculate the differences of odd numbers and the sum of even numbers, then calculate their sum
*/
#include<bits/stdc++.h>
using namespace std;
 
int  main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,SumOdd=0,SumEven=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            SumEven=SumEven+i;
        }
        if(i%2!=0)
        {
            SumOdd=SumOdd-i;
        }
    }
    cout<<SumOdd+SumEven;
    return 0;
}

/* Solution 2 ( Accept ) 
  If n is even, then the answer is n / 2, otherwise the answer is (n - 1) / 2 - n =  - (n + 1) / 2.
*/
#include<bits/stdc++.h>
using namespace std;

int  main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,SumOdd=0,SumEven=0;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2;
    }
    else
    {
        cout<<-(n+1)/2;
    }
    return 0;
}
