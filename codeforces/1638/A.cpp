#include"bits/stdc++.h"
using namespace std;

const int32_t MOD = 1e9 + 7;
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
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;
		vector<int> a(n);
		rep(i,0,n) cin >> a[i];
		int s=0, e=0;
		rep(i,0,n)
		{
			if(a[i] != i+1){
				s = i;
				break;
			}
		}
		
		rep(i,0,n){
			if(a[i] == s + 1){
				e = i;
				break;
			}
		}
		reverse(a.begin()+s , a.begin()+e+1);
		for(auto &x : a) cout << x << " ";
			cout << '\n';
	}

	return 0;
}