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
ll gcd(ll a,ll b){return (b ? gcd(b, a%b) : a);}
ll modsub(ll a,ll b,ll m){return ((a%m - b%m) + m)%m;}
ll modadd(ll a,ll b,ll m){return (a%m + b%m)%m;}
ll modmult(ll a, ll b, ll m){return ((a%m) * (b%m))%m;}

const int N = 1e5 + 10;


void solve()
{
	int n,m;
	cin >> n;
	vector<int> a(n),b(n);
	vector<int> A(n), B(n);
	rep(i,0,n){
		cin >> a[i];
		A[i] = a[i];
	}
	rep(i,0,n){
		cin >> b[i];
		B[i] = b[i];
	}
	sort(all(A));
	sort(all(B));
	vector<pair<int,int> > indices;
	bool flag = false;

	rep(i,0,n){
		if(a[i] == A[i] and b[i] == B[i]) continue;
		else{
			rep(j,i+1,n){
				if(a[j] == A[i] and b[j] == B[i]){
					indices.pb({i,j});
					swap(a[i], a[j]);
					swap(b[i], b[j]);
				}
			}
		}

		if(a[i] == A[i] and b[i] == B[i]) continue;
		else{
			flag = true;
			break;
		}
	}

	if(flag){
		cout << "-1\n";
		return;
	}
	cout << sz(indices) << '\n';
	for(auto &x : indices){
		cout << x.F + 1 << ' ' << x.S + 1 << '\n';
	}
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