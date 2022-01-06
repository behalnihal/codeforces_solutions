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
        for(auto &v : a) cin>>v;
        if(a[0] != n && a[n-1] != n) cout << -1 << '\n';
        else
        {
            reverse(a.begin(), a.end());
            for(auto &x : a) cout << x << " ";
            cout << '\n';
        }

    }
	return 0;
}