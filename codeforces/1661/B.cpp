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
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define sz(a) a.size()

ll expo(ll a,ll b,ll m){a%=m;ll res=1;while(b){if(b&1)res=(a*res)%m;a=(a*a)%m;b>>=1;}return res;}
ll binpow(ll a,ll b){ll res=1;while(b){if(b&1)res=(res*a);a=(a*a);b>>=1;}return res;}
ll gcd(ll a , ll b){
	return (b ? gcd(b, a%b) : a);
}
int M = 32768;
void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i,0,n){
		cin >> a[i];
	}
	rep(i,0,n){
		int ans = M - a[i];
		if(a[i]== 0){
			cout << 0 << " ";
			continue;
		}
		int x = 0;
		for(int j = a[i]; j<= a[i] + 15; j++){
			x = j - a[i];
			int aa = 0;
			int xx = j;
			while(xx%2 == 0){xx/=2;aa++;}
			if(aa < 15) x+= (15-aa);
			ans = min(ans, x);
		}
		cout << ans << " ";
	}
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

