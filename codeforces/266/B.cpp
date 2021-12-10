#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t,n,i;
    string q;
    cin>>n>>t;
    cin>>q;

    // just swap position of girls and boys if boys are in the left t times.
    while(t--)
    {
        for(int i=1; i<n; ++i)
        {
            if(q[i]=='G' && q[i-1]=='B')
            {
                q[i]='B';
                q[i-1]='G';
                i++;
            }
        }
    }
    
    cout << q;

    return 0;
}