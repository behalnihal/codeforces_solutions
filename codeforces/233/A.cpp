#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,t;
    cin>>n;
    if(n%2!=0) cout << -1;
    else{
        int a[n];
        for(int i=0; i<=n; i++) a[i]=i+1;
        int i=0;
        while(i<n-1){
            t = a[i];
            a[i] = a[i+1];
            a[i+1] = t;
            i = i+2;
        }
        for(int i=0; i<n; i++) cout << a[i] << " ";

    }
    
    return 0;
}