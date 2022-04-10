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
ll gcd(ll a , ll b){
	return (b ? gcd(b, a%b) : a);
}
int M = 32768;
void solve()
{
	int n;
	cin >> n;
	int a[n], b[n];
	rep(i,0,n){
		cin >> a[i];
		b[i] = a[i];
	}
	map<int , int> mp;
	sort(b, b+n);
	rep(i,0,n){
		mp[b[i]] = i;
	}
	rep(i,0,n){
		a[i] = mp[a[i]];
	}
	int L = -1;
	rep(i,0,n){
		if(a[i] != i){
			L = i;
			break;
		}
	}
	int R = -1;
	for(int i=n-1; i>=0; i--){
		if(a[i] != i){
			R = i;
			break;
		}
	}
	if(L == -1 or R == -1){
		cout << "yes\n";
		cout << "1" << " " << "1" << '\n';
		return;
	}
	reverse(a+L , a+R+1);
	int ok = 1;
	rep(i,0,n){
		if(a[i] != i){
			ok = 0;
		}
	}
	if(ok){
		cout << "yes\n";
		cout << L + 1 << " " << R + 1 << '\n';
	}
	else {
		cout << "no\n";
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

