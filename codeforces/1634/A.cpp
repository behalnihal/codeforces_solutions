#include"bits/stdc++.h"
using namespace std;

const int32_t MOD = 1e9 + 7;
typedef long long ll;
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(s) s.begin(),s.end()
#define rep(i,a,b) for(int i=a; i<b; i++)
ll expo(ll a,ll b,ll m){a%=m;ll res=1;while(b){if(b&1)res=(a*res)%m;a=(a*a)%m;b>>=1;}return res;}

// const int N = 1e7 + 10;
// vector<bool> isPrime(N,1);
// void seive(){
// 	isPrime[0] = isPrime[1] = false;
// 	for(int i=2; i < N; ++i){
// 		if(isPrime[i] == true){
// 			for(int j = 2 * i; j < N; j+=i){
// 				isPrime[j] = false;
// 			}
// 		}
// 	}
// }

void solve()
{
	int n,k;
	string s;
	cin >> n >> k >> s;
	string t = s;
	reverse(all(t));
	bool flag = false;
	rep(i,0,s.length()){
		if(s[i] != t[i]){
			flag = true;
		}
	}
	if(!flag and k > 0){
		cout << 1 << '\n';
	}
	else{
		if(k==0) cout << 1 << '\n';
		else cout << 2 << '\n';
	}

}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}