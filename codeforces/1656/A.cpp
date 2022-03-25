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
bool isPrime(int n)
{
    if (n <= 1)
        return false;
  
    for (int i = 2; i * i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i,0,n){
		cin >> a[i];
	}

	int i = min_element(all(a)) - a.begin(), j = max_element(all(a)) - a.begin();
	cout << i + 1 << " " << j + 1 << '\n';
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

	