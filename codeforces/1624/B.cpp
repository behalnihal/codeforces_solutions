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
        int a,b,c;
        cin>>a>>b>>c;

        int A = 2*b - c;
        int B = a + (c-a)/2;
        int C = a + 2*(b-a);

        if(A>=a and A%a==0 and A!=0) cout << "YES\n";
        else if(B>=b and (c-a)%2==0 and B%b==0 and B!=0) cout << "YES\n";
        else if(C>=c and C%c==0 and C!=0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}