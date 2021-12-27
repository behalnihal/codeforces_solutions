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
        long long a, b, c;
        cin>>a>>b>>c;
        (a+b==c) || (b+c==a) || (a+c==b) || (a==b && c%2==0) || (b==c && a%2==0) || (a==c && b%2==0) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}