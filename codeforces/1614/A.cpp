#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    long long int t,n,l,r,k; // t testcases, n no.of chocolates, l min price, r max price, k balance
    cin>>t;

    while(t--)
    {
        cin>>n>>l>>r>>k;
        vector<long long> prices(n);
        for(int i=0; i<n; ++i) cin>>prices[i];
        sort(prices.begin(), prices.end());
        long long ans=0;
        for(int i=0; i<n; i++)
        {
            if(prices[i]>k) break;
            else if(prices[i]>=l && prices[i] <= r){
                ans++;
                k-=prices[i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}