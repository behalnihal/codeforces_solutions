#include"bits/stdc++.h"
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;

	while(t--)
	{
		int l,r,k;
		cin>>l>>r>>k;
		
		if(l==1 and r==1){ cout << "NO\n"; continue;}
		else if(l==r){ cout << "YES\n"; continue;}

		int n = r-l+1;
		int cost = n/2;

		if(r%2==1 and l%2==1) cost++;
		cout << (cost <=k ? "YES\n" : "NO\n");

	}

	return 0;
}