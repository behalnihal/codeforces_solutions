#include"bits/stdc++.h"
using namespace std;

const int32_t MOD = 1e9 + 7;
typedef long long ll;
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
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i,0,n) cin >> a[i];
	cout << (is_sorted(all(a)) ? "NO\n" : "YES\n");
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	// cout << (6&	4);
	return 0;
}