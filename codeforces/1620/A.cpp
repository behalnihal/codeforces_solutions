#include"bits/stdc++.h"
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	string s;
	cin>>t;

	while(t--)
	{
		cin>>s;
		int ans=0;
		for(int i=0; i<s.size(); i++)
		{
			if(s[i]=='N') ans++;
		}
		if(ans==1) cout << "NO" << '\n';
		else cout << "YES" << '\n';
	}
	return 0;
}