#include"bits/stdc++.h"
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int k;
	cin>>k;

	vector<int> a(12);
	for(auto &x : a) cin>>x;

	sort(a.begin(), a.end(), greater<int>());
	int sum = accumulate(a.begin(), a.end(), 0);
	int ans = 0;
	int ct = 0;
	for(int i=0; i<12; i++)
	{
		if(ans >= k) break;
		ans += a[i];
		ct++;
	}
	if(sum < k) cout << -1 << '\n';
	else cout << ct << '\n';
	
	return 0;
}