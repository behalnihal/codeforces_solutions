#include"bits/stdc++.h"
using namespace std;

const int MOD = 1e9 + 7;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(int i=a; i<b; i++)
ll expo(ll a,ll b,ll m){a%=m;ll res=1;while(b){if(b&1)res=(a*res)%m;a=(a*a)%m;b>>=1;}return res;}


int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	if(x1 != x2 and y1!=y2 and abs(x1 - x2) != abs(y1 - y2)) cout << -1 << '\n';
	else if(x1==x2) 
		cout << x1 + abs(y1-y2) << " " << y1 << " " << x2 + abs(y1-y2) << " " << y2 << '\n';
	else if(y1==y2) 
		cout << x1 << " " << y1 + abs(x1-x2) << " " << x2 << " " <<  y2 + abs(x1-x2) << '\n';
	else 
		cout << x1 << " " << y2 << " " << x2 << " " << y1 << '\n';

	return 0;
}