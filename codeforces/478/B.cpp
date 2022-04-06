#include"bits/stdc++.h"
using namespace std;

const int MOD = 1000000007;
#define ll long long
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(s) s.begin(),s.end()
#define rep(i,a,b) for(int i=a; i<b; i++)
#define sz(a) a.size()
#define FOR(i,a,b) for(int i=a; i<=b; i++)
ll expo(ll a,ll b,ll m){a%=m;ll res=1;while(b){if(b&1)res=(a*res)%m;a=(a*a)%m;b>>=1;}return res;}
ll binpow(ll a,ll b){ll res=1;while(b){if(b&1)res=res*a;a=a*a;b>>=1;}return res;}

void solve()
{
	ll n,m;
	cin >> n >> m;
	ll mx = (n-m+1) * (n-m)/2;
	ll mn = ((n%m)*(n/m + 1)*(n/m))/2 + ((m - (n%m))*(n/m - 1)*(n/m))/2;
	cout << mn << " " << mx;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t = 1;
	// cin >> t;
	while(t--){
		solve();
	}

	return 0;
}

	