#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin>>n;

    int a[n];
    for(auto &x : a) cin>>x;

    bool flag = false;
    int count = 0;
    int zero = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==0) flag = true;
        if(a[i]==5) count++;
        if(a[i]==0) zero++;
    }
    if(!flag) cout << -1 << '\n';
    else if(count < 9) cout << 0 << '\n';
    else if(count >= 9){
        int r = count%9;
        for(int i=0; i<(count - r); i++) cout << 5;
        for(int i=0; i<zero; i++) cout << 0;
    }
    return 0;
}