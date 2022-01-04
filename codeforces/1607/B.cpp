#include"bits/stdc++.h"
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        ll x,n;
        cin>>x>>n;

        if(x%2!=0 && n%4==0) cout << x << '\n';
        else if(x%2!=0 && n%4==1) cout << x+n << '\n';
        else if(x%2!=0 && n%4==2) cout << x-1 << '\n';
        else if(x%2!=0 && n%4==3) cout << x-n-1 << '\n'; 
        else if(x%2==0 && n%4==0) cout << x << '\n';
        else if(x%2==0 && n%4==1) cout << x-n << '\n'; 
        else if(x%2==0 && n%4==2) cout << x+1 << '\n'; 
        else if(x%2==0 && n%4==3) cout << x+n+1 << '\n'; 
    }
    return 0;
}