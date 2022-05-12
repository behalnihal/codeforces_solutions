// Author :- Nihal Gupta //

#include"bits/stdc++.h"
using namespace std;

const int MOD = 1e9 + 7;
typedef long long ll;
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
#define min3(a,b,c) min(a, min(b,c))

ll expo(ll a,ll b,ll m){a%=m;ll res=1;while(b){if(b&1)res=(a*res)%m;a=(a*a)%m;b>>=1;}return res;}
ll binpow(ll a,ll b){ll res=1;while(b){if(b&1)res=(res*a);a=(a*a);b>>=1;}return res;}
ll gcd(ll a , ll b){return (b ? gcd(b, a%b) : a);}

ll n , m;
bool val(ll r, ll c){
	return(r > 0 and r <= n and c > 0 and c <= m);
}

void solve()
{
	cin >> n >> m;
	int a[n+1][m+1];
	FOR(i,1,n){
		FOR(j,1,m){
			cin >> a[i][j];
		}
	}
	ll ans = 0, sum = 0;
	FOR(i,1,n){
		FOR(j,1,m){
			sum = a[i][j];
			FOR(k,1,max(n,m)){
				if(val(i - k, j + k))sum += a[i-k][j+k];
				if(val(i + k, j - k))sum += a[i+k][j-k];
				if(val(i - k, j - k))sum += a[i-k][j-k];
				if(val(i + k, j + k))sum += a[i+k][j+k];
			}
			ans = max(ans , sum);
		}
	}
	cout << ans << '\n';
}

int main()
{

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	ll n,m;
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}