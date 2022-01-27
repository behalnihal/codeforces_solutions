#include"bits/stdc++.h"
using namespace std;

const int MOD = 1e9 + 7;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(int i=a; i<=b; i++)

void solve()
{
	int n;
	cin>>n;
	vector<int> a(n+1);
	vector<vector<int>> pos(n+2);

	rep(i,1,n){
		cin>>a[i];
		pos[a[i]].push_back(i);
	}

	int l = 1;
	vector<int> b;

	while(l <= n){
		int mex = 0;
		int r = l;

		for(;mex <= n + 1; mex++){
			auto it = lower_bound(pos[mex].begin(), pos[mex].end(),l);
			if(it==pos[mex].end())
				break;
			r = max(r, *it);
		}

		b.push_back(mex);
		l = r + 1;
	}

	cout << (int)b.size() << '\n';
	for(auto v : b) cout << v << " ";
		cout << '\n';
}

int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}
