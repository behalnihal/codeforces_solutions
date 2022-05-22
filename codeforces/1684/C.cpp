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
ll modsub(ll a , ll b, ll m){return ((a % m - b % m) + m) % m;}
ll modadd(ll a , ll b, ll m){return (a % m + b % m) % m;}

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	rep(i,0,n){
		rep(j,0,m){
			cin >> a[i][j];
		}
	}
	vector<int> bad;
	for(int i=0; i<n and bad.empty(); i++){
		vector<int> b = a[i];
		sort(all(b));
		rep(j,0,m){
			if(a[i][j] != b[j]) bad.pb(j);
		}
	}
	if(sz(bad) == 0){
		cout << "1 1" << '\n';
		return;
	}
	if(sz(bad) > 2){
		cout << "-1\n";
		return;
	}
	rep(i,0,n){
		swap(a[i][bad[0]], a[i][bad[1]]);
	}
	rep(i,0,n){
		rep(j,1,m){
			if(a[i][j] < a[i][j-1]){
				cout << "-1\n";
				return;
			}
		}
	}
	cout << bad[0] + 1 << ' ' << bad[1] + 1 << '\n';
}

int main()
{

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}