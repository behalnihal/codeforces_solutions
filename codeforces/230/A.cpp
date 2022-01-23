#include<bits/stdc++.h>
using namespace std;


int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int s,n;
	cin>>s>>n;

	int a[n], b[n];
	for(int i=0; i<n; i++){
		cin>>a[i]>>b[i];
	}

	int cnt = 0;

	pair<int,int> dgn[n];

	for(int i=0; i<n; i++){
		dgn[i].first = a[i];
		dgn[i].second = b[i];
	}

	sort(dgn, dgn+n);

	for(int i=0; i<n; i++){
		if(dgn[i].first < s){ s+= dgn[i].second; cnt++;}
	}

	cout << (cnt < n ? "NO" : "YES");

	return 0;
}
