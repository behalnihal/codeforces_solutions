#include"bits/stdc++.h"
using namespace std;

const int32_t MOD = 1e9 + 7;
typedef long long ll;
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(s) s.begin(),s.end()
#define rep(i,a,b) for(int i=a; i<b; i++)
ll expo(ll a,ll b,ll m){a%=m;ll res=1;while(b){if(b&1)res=(a*res)%m;a=(a*a)%m;b>>=1;}return res;}
const int N = 1e5 + 10;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,l;
	cin >> n >> l;
	
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(all(a));
	double ans = 2 * max(a[0], l-a[n-1]);
	for(int i=0; i<n-1; i++){
		ans = fmax(ans, a[i+1]-a[i]);
	}
	printf("%.9f", ans * 0.5);

	return 0;
}