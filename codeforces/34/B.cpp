#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m;
    cin>>n>>m;
    int a[n];
    for(auto &x : a) cin>>x;
    sort(a,a+n);
    int ans = 0;
    for(int i=0; i<m; i++){
        if(a[i] > 0) break;
        ans +=a[i];
    }
    cout << abs(ans);
    return 0;
}