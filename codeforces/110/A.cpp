#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int n;
    int ans=0;
    cin>>n;
    while(n!=0)
    {
        if(n%10==4 || n%10==7) ans++;
        n = n/10;
    }
    if(ans == 4 || ans == 7) cout << "YES" << "\n";
    else cout << "NO" << "\n";

    return 0;
}