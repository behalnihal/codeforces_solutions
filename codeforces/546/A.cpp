#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // k = amount of first banana, n = dollars he has, w= no. of bananas
    long long int n,k,w, ttlamt=0;

    cin>>k>>n>>w;
    
    for(int i=1; i<=w; i++)
    {
        ttlamt = ttlamt + (i*k);
    }
    if(ttlamt<=n) cout << 0;
    else cout << ttlamt - n;
    
    return 0;
}