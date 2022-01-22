#include"bits/stdc++.h"
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> a(n);
        for(int &x : a) cin>>x;

        bool flag = true;
        int minval = *min_element(a.begin(), a.end());

        for(int i=0; i<n; i++)
        {
            if(a[0] != a[i]){
             flag = false;
             break;
            }
        }

        // if every no is same in the array the ans is -1
        if(flag){
         cout << "-1\n";
         continue;
        }

        sort(a.begin(), a.end());
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            ans = __gcd(ans, a[i] - minval);
        }

        cout << ans << '\n';
    }

    return 0;
}