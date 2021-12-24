#include"bits/stdc++.h"
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		long long b[n];
		for(auto &v : b) cin>>v;
		long long sum = 0;
		for(int i=0; i<n; i++)
		{
			sum += b[i];
		}
		if(sum%n==0) cout << "0\n";
		else cout << "1\n";
	}

	return 0;
}