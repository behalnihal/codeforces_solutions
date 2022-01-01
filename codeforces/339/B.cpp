#include"bits/stdc++.h"
using namespace std;

#define ll long long


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	ll n, m, cur = 0;
    ll res = 0;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        --x;
        if (x < cur)
            res += n - cur + x;
        else
            res += x - cur;
        cur = x;
    }
    cout << res;

	return 0;
}