#include"bits/stdc++.h"
using namespace std;

const int32_t MOD = 998244353;
#define ll long long
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(s) s.begin(),s.end()
#define rep(i,a,b) for(int i=a; i<b; i++)

ll expo(ll a,ll b,ll m){a%=m;ll res=1;while(b){if(b&1)res=(a*res)%m;a=(a*a)%m;b>>=1;}return res;}
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int r[10] = {1200,1400,1600,1900,2100,2300,2400,2600,3000};
void solve()
{
	string s;
	int x;
	cin >> s >> x;
	if((s=="ABC" and x<2000) or (s=="ARC" and x<2800) or (s=="AGC" and x>=1200)){
		cout << "YES\n";
		return;
	}
	cout << "NO\n";
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

	