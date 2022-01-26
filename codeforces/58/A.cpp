#include"bits/stdc++.h"
using namespace std;

const int MOD = 1e9 + 7;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(int i=a; i<b; i++)

ll mult(ll a , ll b)
{
	ll ans = 0;
	while(b)
	{
		if(b&1) ans = (ans + a) % MOD;
		a = (a + a)%MOD;
		b >>= 1;
	}
	return ans;
}

ll expo(ll a, ll b, ll m)
{
	a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin>>s;
	int n = s.size();
	for(int i=0; i<n; ++i)
	{
		if(s[i] == 'h')
			for(int j = i+1; j<n; j++){
				if(s[j] == 'e')
					for(int k = j+1; k<n; k++){
						if(s[k]=='l')
							for(int l=k+1; l<n; l++){
								if(s[l] == 'l')
									for(int m = l+1; m<n; m++){
										if(s[m] == 'o'){
											cout << "YES";
											return 0;
										}
										
									}
							}
					}
			}
	}
	cout << "NO";
}
