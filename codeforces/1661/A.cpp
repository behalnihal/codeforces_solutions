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

void solve()
{
	ll n;
	cin >> n;
	ll a[n] , b[n];
	rep(i,0,n){
		cin >> a[i];
	}
	rep(i,0,n){
		cin >> b[i];
	}
	ll sum1 = a[0], sum2 = b[0];
	ll sum = 0;
	rep(i,1,n){
		ll t1 = abs(a[i] - sum1) + abs(b[i] - sum2);
		ll t2 = abs(b[i] - sum1) + abs(a[i] - sum2);
		if(t1 > t2){
			sum += t2;
			sum1 = b[i];
			sum2 = a[i];
		}
		else{
			sum += t1;
			sum1 = a[i];
			sum2 = b[i];
		}
	}
	cout << sum << '\n';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}

