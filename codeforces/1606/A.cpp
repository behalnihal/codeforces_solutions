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
        string s;
        cin>>s;
        int n = s.length();
        s[n-1] = s[0];
        cout << s << '\n';
    }

    return 0;
}