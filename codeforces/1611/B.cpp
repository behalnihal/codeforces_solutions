#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        long long a, b;
        cin>>a>>b;
        // (a>=4 || b>=4) && a!=b ? cout<< min(a,b) << '\n' : cout << min(a,b)/2 << '\n';
        cout << min(min(a,b), (a+b)/4) << '\n';
    }

    return 0;
}