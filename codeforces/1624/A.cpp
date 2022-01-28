#include"bits/stdc++.h"
using namespace std;

const int MOD = 1e9 + 7;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(int i=0; i<b; i++)
 
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
		rep(i,0,n)cin>>a[i];
		int mx = *max_element(a.begin(), a.end());
		int mn = *min_element(a.begin(), a.end());
		cout << mx - mn << '\n';
	}

	return 0;
}
