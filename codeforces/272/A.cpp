#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,f, total=0, ans=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>f;
        total += f;
    }

    for(int i=1; i<=5; i++)
    {
        if((total+i)%(n+1) != 1) ans+=1;
    }

    cout << ans << '\n';


    return 0;
}