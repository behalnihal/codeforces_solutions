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

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	int zl=0,ol=0,zr=0,o_r=0;
	rep(i,0,n){
		int l,r;
		cin >> l >> r;
		if(l==0) zl++;
		if(l==1) ol++;
		if(r==0) zr++;
		if(r==1) o_r++;
	}
	cout << min(zl, ol) + min(zr ,o_r) << '\n';


	return 0;
}