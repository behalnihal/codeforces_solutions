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

const int N = 1e7 + 10;
vector<bool> is_prime(N, true);
vector<int> lp(N), hp(N);

void sieve(){
	is_prime[0] = is_prime[1] = false;
	for(int i = 2; i * i <= N; i++){
		if(is_prime[i]){
			lp[i] = hp[i] = i;
			for(int j = 2 * i; j <= N; j += i){
				is_prime[j] = false;
				hp[j] = i;
				if(lp[j] == 0){
					lp[j] == i;
				}
			}
		}
	}
}
int almost(int n){
	set<int> prime_factors;
	while(n > 1){
		int prime_f = hp[n];
		while(n % prime_f == 0){
			n /= prime_f;
			prime_factors.insert(prime_f);
		}
	}
	return sz(prime_factors);
}

void solve()
{
	int n;
	cin >> n;
	ll cnt = 0;
	FOR(i,1,n){
		if(almost(i) == 2) cnt++; 
	}
	cout << cnt << '\n';
}

int main()
{

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	sieve();
	int t = 1;
	// cin >> t;
	while(t--){
		solve();
	}
	return 0;
}