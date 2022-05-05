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
#define int int64_t
int prime[(int)1e6 + 10];
set<int> tprime;
void seive(){
	tprime.insert(4);
	for(int i = 3; i < 1e6 +1; i+=2){
		if(prime[i] == 0){
			tprime.insert(i*i);
			for(int j = i; j <= 1e6; j+=i){
				prime[j] = 1;
			}
		}
	}
}

void solve()
{
	int n;
	cin >> n;
	seive();
	rep(i,0,n){
		int x;
		cin >> x;
		if(tprime.find(x) != tprime.end()){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t = 1;
	// cin >> t;
	while(t--){
		solve();
	}
}