#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    cin>>s;
    bool flag = false;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'H' or s[i] == 'Q' or s[i] == '9') flag = true;
    }
    if(flag) cout << "YES";
    else cout << "NO";

    return 0;
}