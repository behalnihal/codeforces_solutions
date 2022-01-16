#include"bits/stdc++.h"
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin>>t;

	while(t--)
	{
		int n,m,r,c;
		cin>>n>>m>>r>>c;
		r--;c--;
		char a[n][m];
		bool found = false;

		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>a[i][j];
				found |= (a[i][j] == 'B');
			}
		}
		bool flag = false;

		if(!found) cout << -1 << '\n';
		else if(a[r][c]=='B') cout << 0 << '\n';
		else{
			for(int i=0; i<m; i++){
				if(a[r][i] == 'B') flag = true;
			}
			for(int i=0; i<n; i++){
				if(a[i][c]== 'B') flag = true;
			}
			if(flag == true) cout << 1 << '\n';
			else cout << 2 << '\n';
		}
	}

	return 0;
}