#include"bits/stdc++.h"
using namespace std;

#define ll long long

void solve()
{
	ll m,n;
	cin>>n>>m;
	if(n==1 and m==1) cout << 0 << '\n';
	else if(n==1 or m==1) cout << 1 << '\n';
	else cout << 2 << '\n';
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
	}

	return 0;
}