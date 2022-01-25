#include"bits/stdc++.h"
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define mp make_pair
#define pb push_back

ll expo(ll a, ll b, ll m)
{
	a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;

	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		cout << expo(n,k,MOD) << '\n';
	}
	return 0;	
}
