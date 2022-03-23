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
	int x, y;
	cin >> x >> y;
	if(x==0 and y == 0){
		cout << "0\n";
		return;
	}

	if(floor(sqrt(x*x + y*y)) == ceil(sqrt(x*x + y*y))) cout << 1 << '\n';
	else cout << 2 << '\n';
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

	