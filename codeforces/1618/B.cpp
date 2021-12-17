#include"bits/stdc++.h"
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t,n;
	cin>>t;

	while(t--)
	{
		cin>>n;
		vector<string> bigrams(n-2);
		for(auto &b : bigrams)
			cin>>b;
		string str = bigrams[0];
		bool found = false;

		for(int i=1; i<n-2; ++i)
		{
			if(str.back() != bigrams[i].front())
			{
				found = true;
				str += bigrams[i];
			}
			else str += bigrams[i].back();
		}

		if(!found) str += 'a';

		cout << str << '\n';
	}

	return 0;
}