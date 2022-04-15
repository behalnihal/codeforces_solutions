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

int a[10];
void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i,0,n){
		cin >> a[i];
	}
	int mn = *min_element(all(a)), mx = *max_element(all(a));
	int l, r;
	rep(i,0,n){
		if(a[i] == mx){
		 r = i;
		 break;
		}
	}
	for(int i=n-1; i>=0; i--){
		if(a[i] == mn){
		 l = i;
		 break;
		}
	}
	// l++; r++;
	int cl = l, cr = r;
	// cout << l << " " << r << '\n';
	int al = 0, ar = 0;
	while(l != n-1){
		swap(a[l] , a[l+1]);
		l++;
		al++;
	}
	while(r != 0){
		swap(a[r], a[r-1]);
		r--;
		ar++;
	}
	// cout << al << " " << ar << '\n';
	if(cl > cr){
		cout << al + ar;
	}
	else cout << al + ar - 1;
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

