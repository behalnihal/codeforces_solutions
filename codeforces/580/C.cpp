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
ll gcd(ll a , ll b){return (b ? gcd(b, a%b) : a);}

int n = 1e5 + 10, m;
int ans = 0;
vector<vector<int>> g(n);
vector<int> a(n);
void dfs(int u, int p, int numC, int maxC){
	if(a[u])numC++;
	else numC = 0;
	maxC = max(maxC, numC);
	int numChild = 0;
	for(int v : g[u]){
		if(v!=p){
			dfs(v,u,numC,maxC);
			numChild++;
		}
	}
	if(numChild == 0 and maxC <= m) ans++;
}
void solve()
{
	cin >> n >> m;
	FOR(i,1,n){
		cin >> a[i];
	}
	rep(i,1,n){
		int x,y;
		cin >> x >> y;
		g[x].pb(y);
		g[y].pb(x);
	}
	dfs(1,-1,0,0);
	cout << ans << '\n';
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

