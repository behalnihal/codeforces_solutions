#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string s,a;
    cin>>s>>a;
    string f = s+a;
    string c;
    cin>>c;
    sort(f.begin(), f.end());
    sort(c.begin(), c.end());
    bool flag = false;
    if(f.size() != c.size()) cout << "NO";
    else{
        for(int i=0; i<f.size(); i++){
            if(f[i] != c[i]) flag = true;
        }
        if(flag) cout << "NO";
        else cout << "YES";
    }

    return 0;
}