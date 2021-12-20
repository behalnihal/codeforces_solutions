#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    string s;
    cin>>t;
    
    while(t--)
    {
        cin>>s;
        if(s.length() % 2 != 0) cout << "NO\n";
        else{
            string s1 = s.substr(0, s.length()/2);
            string s2 = s.substr(s.length()/2);
            if(s1==s2) cout << "YES\n";
            else cout << "NO\n";
        }
    }


    return 0;
}