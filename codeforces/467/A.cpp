#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    int p, q, r=0;

    while(n--)
    {
        cin>>p>>q;
        if(q-p>=2) r++;
        else r;
    }
    cout << r;

    return 0;
}