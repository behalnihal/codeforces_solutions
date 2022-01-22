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
        int n;
        cin>>n;

        vector<int> a(n), used(n+1, false);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end(), greater<int>());

        bool ok = true;

        for(auto &x : a){
            int i = x;
            while(i>n or used[i]) i/=2;
            if(i>0) used[i] = true;
            else ok = false; 
        }

        ok ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}