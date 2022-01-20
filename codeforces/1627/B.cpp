#include"bits/stdc++.h"
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;

	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<int> a;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				a.push_back(max(i, n - i - 1) + max(j, m - j - 1));
			}
		}
		sort(a.begin(), a.end());
		for(auto &x : a) cout << x << " ";
		cout << '\n';
	}

	return 0;
}