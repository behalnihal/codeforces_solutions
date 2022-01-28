#include"bits/stdc++.h"
using namespace std;

const int MOD = 1e9 + 7;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(int i=0; i<b; i++)

int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n,m;
	cin>>n>>m;
	ll ans=0, cur=0;
	rep(i,0,m){
		ll x;
		cin>>x;
		--x;
		if(x<cur) ans += n-cur+x;
		else ans += x-cur;
		cur = x;
	}
	cout << ans;

	return 0;
}
