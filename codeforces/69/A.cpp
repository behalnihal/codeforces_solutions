#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,x,y,z;
    int sumX=0,sumY=0,sumZ=0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }
    if(sumX == 0 && sumY ==0 && sumZ ==0) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    return 0;    
}