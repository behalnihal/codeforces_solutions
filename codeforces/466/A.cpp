#include"bits/stdc++.h"
using namespace std;

const int MOD = 1e9 + 7;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(int i=a; i<b; i++)
ll expo(ll a,ll b,ll m){a%=m;ll res=1;while(b){if(b&1)res=(a*res)%m;a=(a*a)%m;b>>=1;}return res;}


int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int ans = 0;
	
	if(m*a <= b) ans += n*a;
	else ans += (n/m)* b + min((n%m)*a, b);
	
	cout << ans;
	return 0;
}