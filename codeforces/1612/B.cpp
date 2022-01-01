#include"bits/stdc++.h"
using namespace std;

#define ll long long

void solve()
{
	int n,a,b;
		cin>>n>>a>>b;
		if(a > n/2 + 1 or b < n/2 ) cout << -1;
		else{
			vector<int> l = {a}, r = {b};
			for(int i=n; i>=1; --i)
			{
				if(l.size() < n/2 and i!=a and i!= b and i>=a) l.push_back(i);
				else if(i!=a and i!=b and i<=b) r.push_back(i);
			}
			if(l.size() < n/2 or r.size() < n/2 ){
				cout << -1;
				return;
			}
			for(auto x : l) cout << x << " ";
			for(auto x : r) cout << x << " ";
		}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin>>t;

	while(t--)
	{
		solve();
		cout << '\n';
	}

	return 0;
}