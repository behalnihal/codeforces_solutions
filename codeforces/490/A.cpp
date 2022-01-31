#include"bits/stdc++.h"
using namespace std;

const int MOD = 1e9 + 7;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(int i=a; i<=b; i++)
ll expo(ll a,ll b,ll m){a%=m;ll res=1;while(b){if(b&1)res=(a*res)%m;a=(a*a)%m;b>>=1;}return res;}

int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	vector<int> pro, math, pe;
	rep(i,1,n){
		int x;
		cin>>x;
		if(x==1) pro.pb(i);
		else if(x==2) math.pb(i);
		else if(x==3) pe.pb(i);
	}
	int w = min(min(pro.size(), math.size()), pe.size());
	cout << w << '\n';
	for(int i=0; i<w; i++){
		cout << pro[i] << " " << math[i] << " " << pe[i];
		cout << '\n';
	}

	
	return 0;
}