#include"bits/stdc++.h"
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n,m;
	cin>>n>>m;

	int ct = 0;

	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=m; j++){
			if(i*i + j == n and j*j + i ==m) ct++;
		}
	}

	cout << ct;
	return 0;
}