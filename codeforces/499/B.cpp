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

void solve()
{
	int n,m;
	cin >> n >> m;
	map<string, string> mp;
	rep(i,0,m){
		string s,t;
		cin >> s >> t;
		mp.insert({s,t});
	}
	vector<string> a(n);
	rep(i,0,n){
		cin >> a[i];
	}
	for(auto x : a){
		if(mp.find(x) != mp.end()){
			auto it = mp.find(x);
			if(sz(it->F) <= sz(it->S)){
				cout << it->F << " ";
			}
			else cout << it->S << " ";
		}
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