#include"bits/stdc++.h"
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a[105][105];
	for(int i=1; i<=3; i++){
		for(int j=1; j<=3; j++) cin>>a[i][j];
	}
	
	int k = 0;

	for(int i=1; i<=3; i++){
		for(int j=1; j<=3; j++){
			k = a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j+1]+a[i][j-1];
			if(k%2==0) cout << 1;
			else cout << 0;
		}
		cout << '\n';
	}

	return 0;
}