#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define mp make_pair 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;

	while(t--)
	{
		ll n, k;
		vector<pair<ll , ll>> r;
	    	cin>>n>>k;
	    	ll a[n] , b[n];
	    	for(auto &x : a){
	          cin>>x;
	      	}
	    for(auto &x : b){
	   	  cin>>x;
	    }
	      for(ll i=0; i<n;i++){
	          r.push_back(mp(a[i] , b[i]));
	      }
	      
	      sort(r.begin() , r.end());
	      
	      for(ll i=0; i<n; i++){
	          if(r[i].first <= k){
	              k+= r[i].second;
	          }
	          else{
	              break;
	          }
	      }
	      cout<<k<<endl;
	      
	  }
	  return 0;
}