#include"bits/stdc++.h"
using namespace std;

void countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;
 
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(auto &v : a) cin>>v;
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
        	if(a[i]<0) mp[-1 *a[i]]++;
        	else mp[a[i]]++;
        }
        int ans = 0;
        for(auto x : mp)
        {
            if(x.first==0) ans+=1;
            else{
                x.second>=2 ? ans+=2 : ans +=1;
            }
        }
        cout << ans << '\n';

    }

    return 0;
}