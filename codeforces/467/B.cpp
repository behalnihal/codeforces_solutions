#include"bits/stdc++.h"
using namespace std;

const int MOD = 1e9 + 7;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(int i=0; i<b; i++)

ll expo(ll a,ll b,ll m){a%=m;ll res=1;while(b){if(b&1)res=(a*res)%m;a=(a*a)%m;b>>=1;}return res;}

int solve(int a, int b){
	int c = (a^b);
	int cnt = 0;
	while(c){
		c = c&(c-1);
		cnt++;
	}
	return cnt;
}

int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n,m,k;
	cin>>n>>m>>k;

	int a[m];
	rep(i,0,m+1) cin>>a[i];
	int ans = 0;
	for(int i=0; i<m; i++){
		if(solve(a[i],a[m]) <= k)ans++;
	}
	cout << ans;

	// cout << solve(8,17) << '\n';
	// cout << solve(5,17) << '\n';
	// cout << solve(111,17) << '\n';
	
	return 0;
}
