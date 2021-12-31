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
		vector<long long> a(n);
		for(auto &v : a) cin>>v;
		long long c=0;
		for(auto &i : a){
			while(i%2==0)
			{
				i/=2;
				c++;
			}
		}
		sort(a.begin(), a.end());
		while(c>0)
		{
			--c;
			a.back() *= 2;
		}
		long long ans = 0;
		for(auto i : a) ans += i;
		cout << ans << '\n';
	}

	return 0;
}