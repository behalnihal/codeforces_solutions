#include"bits/stdc++.h"
using namespace std;

int lucky(int n)
{
    while(n)
    {
        if(n%10!=7 && n%10!=4) return 0;
        n/=10;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(n%i==0 && lucky(i))
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}