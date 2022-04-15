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

ll revno(ll n){
	ll new_num = 0;
	while(n){
		int d = n%10;
		n/=10;
		new_num = new_num*10 + d;
	}
	return new_num;
}
ll remzo(ll n){
	ll new_num = 0;
	while(n){
		int d = n%10;
		n/=10;
		if(d == 0) continue;
		else new_num = new_num * 10 + d;
	}
	return new_num;
}
void solve()
{
	ll a, b;
	cin >> a >> b;
	ll c = a + b;
	ll a1 = 0, b1 = 0 , c1 = 0;
	a = revno(a), b = revno(b), c = revno(c);
	a1 = remzo(a), b1 = remzo(b), c1 = remzo(c);
	// cout << a1 << " " << b1 << " " << c1;
	// return;
	cout << (a1 + b1 == c1 ? "YES" : "NO");
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

