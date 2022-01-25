#include"bits/stdc++.h"
using namespace std;

const int MOD = 1e9 + 7;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(int i=a; i<b; i++)

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

ll expo(ll a, ll b, ll m)
{
	a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int print(vector<int> v, int n){
	rep(i,0,n) cout << v[i] << " ";
}

int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;

	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if((a==c and b+d==a) or(b==d and a+c == b) or (a==d and b+c==a) or(b==c and a+d ==b)) cout << "Yes\n";
		else cout << "No\n";
	}

	return 0;	
}
