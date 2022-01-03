#include"bits/stdc++.h"
using namespace std;

void solve()
{
	string s,t;
	cin>>s>>t;
	if(t!="abc"){
		sort(s.begin(), s.end());
		cout << s << '\n';
		return;
	}

	map<char, int> freq;
	for(auto &ch : s) freq[ch]++;

	if(min({freq['a'], freq['b'], freq['c']}) == 0){
		sort(s.begin(), s.end());
		cout << s << '\n';
		return;
	}

	for(auto &ch : s)
		if(ch == 'b')
			ch = 'c';
		else if(ch=='c')
			ch = 'b';

	sort(s.begin(), s.end());

	for(auto &ch : s)
		if(ch=='b')
			ch = 'c';
		else if(ch == 'c')
			ch = 'b';

	cout << s << '\n';
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