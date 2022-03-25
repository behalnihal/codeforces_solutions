#include"bits/stdc++.h"
using namespace std;

const int32_t MOD = 1e9 + 7;
#define ll long long
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(s) s.begin(),s.end()
#define rep(i,a,b) for(int i=a; i<b; i++)

ll expo(ll a,ll b,ll m){a%=m;ll res=1;while(b){if(b&1)res=(a*res)%m;a=(a*a)%m;b>>=1;}return res;}

void solve()
{
	ll n,b,x,y;
	cin >> n >> b >> x >> y;
	n++;
	ll sum = 0;
	vector<int> a(n);
	a.pb(0);
	rep(i,1,n){
		if(a[i-1] + x <= b) a[i] = a[i-1] + x;
		else a[i] = a[i-1] - y;
		sum += a[i];
	}
	cout << sum << '\n';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t = 1;
	cin >> t;

	while(t--){
		solve();
	}
	return 0;
}

	