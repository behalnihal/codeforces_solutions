#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,x,y;
    cin>>t;
    
    while(t--)
    {
        cin>>x>>y;
        if((x+y)%2)
        {
            cout << "-1 -1" << '\n';
        }
        else cout << (x+1)/2 << " " << y/2 << '\n';
        
    }

    return 0;
}