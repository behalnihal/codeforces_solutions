#include "bits/stdc++.h"
using namespace std;

long long countSC(long long N)
{
	long long res = (long long)sqrt(N) + (long long)cbrt(N)
			- (long long)(sqrt(cbrt(N)));

	return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
	long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout << countSC(n) << '\n';
    }
	return 0;
}
