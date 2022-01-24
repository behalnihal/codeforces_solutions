#include"bits/stdc++.h"
using namespace std;

const int MOD = 1e9 + 7;

int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;

	while(t--)
	{
		int n,k;
		cin>>n>>k;

		long long ans = 1;
		for(int i=0; i<k; i++) ans = (ans*n)%MOD;

		cout << ans << '\n';
		
	}
	return 0;
}
