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
#define double long double
#define all(s) s.begin(),s.end()
#define rep(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define sz(a) a.size()
#define min3(a,b,c) min(a, min(b,c))
#define print(a) for(auto x : a) cout << x << ' '; cout << '\n'

ll expo(ll a,ll b,ll m){a%=m;ll res=1;while(b){if(b&1)res=(a*res)%m;a=(a*a)%m;b>>=1;}return res;}
ll binpow(ll a,ll b){ll res=1;while(b){if(b&1)res=(res*a);a=(a*a);b>>=1;}return res;}
ll gcd(ll a,ll b){return (b ? gcd(b, a%b) : a);}
ll modsub(ll a,ll b,ll m){return ((a%m - b%m) + m)%m;}
ll modadd(ll a,ll b,ll m){return (a%m + b%m)%m;}
ll modmult(ll a, ll b, ll m){return ((a%m) * (b%m))%m;}


void solve()
{	
	int n;
	cin >> n;
	vector<int> a(n);
	cin >> a[0];
	int cnt = 0, flag = 0;
	rep(i,1,n){
		cin >> a[i];
		if(a[i-1] > a[i]) flag++;
		if(flag) cnt++;
	}
	if(flag > 1) cout << -1;
	else if(flag == 0) cout << 0;
	else if(flag == 1 and a[0] >= a[n-1]){
		cout << cnt;
	}
	else cout << -1;
}

int main()
{

// #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
// #endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// clock_t z = clock();

	int t = 1;
	// cin >> t;
	while(t--){
		solve();
	}

	// cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}