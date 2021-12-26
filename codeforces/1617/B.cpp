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
        long long n;
        cin>>n;
        long long a,b,c=1;
        for(a=2;; a++)
        {
            b = n-a-1;
            if(__gcd(a,b)==1) break;
        }
        cout << a << " " << b << " " << c << '\n';
    }
    return 0;
}