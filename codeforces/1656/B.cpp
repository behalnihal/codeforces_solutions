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
ll binpow(ll a,ll b){ll res=1;while(b){if(b&1)res=(res*a);a=(a*a);b>>=1;}return res;}

void solve()
{
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
	rep(i,0,n){
		cin >> a[i];
	}
	sort(all(a));
	int j = 0;
	rep(i,0,n){
		while(a[i] - a[j] > k) j++;
		if(a[i] - a[j] == k){
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
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

	