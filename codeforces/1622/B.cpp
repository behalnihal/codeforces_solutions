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
        vector<int> a(n);
        for(auto &v : a) cin>>v;
        map<int,int> idx;
        for(int i=0; i<n; i++) idx[a[i]] = i;
        string s;
        cin>>s;
        set<int> l,d;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0') d.insert(a[i]);
            else l.insert(a[i]);
        }
        vector<int> ans(n);
        int x = d.size();
        for(int i=1; i<=x; i++)
        {
            auto it = d.begin();
            ans[idx[*it]] = i;
            d.erase(it);
        }
        for(int i= x+1; i<=n; i++)
        {
            auto it = l.begin();
            ans[idx[*it]] = i;
            l.erase(it);   
        }
        for(int i=0; i<n; i++) cout << ans[i] << " ";
        cout << "\n";
    }

    return 0;
}