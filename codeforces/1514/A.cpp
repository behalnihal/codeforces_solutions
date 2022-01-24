#include<bits/stdc++.h>
using namespace std;


int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		vector<int> a(n);
		for(auto &x : a) cin>>x;

		bool flag = false;

		for(auto &x : a){
			int s = sqrt(x);
			if(s*s != x ){
				flag = true;
				break;
			}
			else continue;
		}

		cout << (flag ? "YES" : "NO") << '\n';
	}
	return 0;
}
