#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s,t;
    cin>>s;
    cin>>t;
    reverse(s.begin(), s.end());
    if(t==s) cout << "YES" << "\n";
    else cout << "NO" << "\n";

    return 0;
}