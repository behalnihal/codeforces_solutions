// author : nihal_gupta 

#include"bits/stdc++.h"
#include<chrono>
using namespace std;

const int MOD = 1e9 + 7;
typedef long long ll;
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
#define F first
#define S second
#define double long double
#define all(s) s.begin(),s.end()
#define rep(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define sz(a) (int)a.size()
#define min3(a,b,c) min(a, min(b,c))
#define print(a) for(auto x : a) cout << x << ' '; cout << '\n'
#define INF 1e18

/**********************************************************************************************/

ll expo(ll a,ll b,ll m){a%=m;ll res=1;while(b){if(b&1)res=(a*res)%m;a=(a*a)%m;b>>=1;}return res;}
ll binpow(ll a,ll b){ll res=1;while(b){if(b&1)res=(res*a);a=(a*a);b>>=1;}return res;}
ll gcd(ll a,ll b){return (b ? gcd(b, a%b) : a);}
ll modsub(ll a,ll b,ll m){return ((a%m - b%m) + m)%m;}
ll modadd(ll a,ll b,ll m){return (a%m + b%m)%m;}
ll modmult(ll a, ll b, ll m){return ((a%m) * (b%m))%m;}

/**********************************************************************************************/


void solve()
{
	string s;
	cin >> s;
	map<char, int> m;
	for(char ch : s){
		m[ch]++;
	}
	int odd_chars = 0;
	for(auto x : m){
		if(x.S&1) odd_chars++;
	}
	if(odd_chars&1 or odd_chars == 0) cout <<"First\n";
	else cout << "Second\n";
}
int main()
{

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

	auto start = chrono::high_resolution_clock::now();

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;
	while(t--){
		solve();
	}

	auto end = chrono::high_resolution_clock::now();
	double time_taken = chrono::duration_cast<chrono::nanoseconds>(end-start).count();
	time_taken *= 1e-9;
	// cerr << "Run Time : " << fixed << time_taken << setprecision(9) << " sec";

	return 0;
}