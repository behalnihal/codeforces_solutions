#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        if(n%4!=0) cout << "NO" << '\n'; // not divisible by 4 coz then it wont get halves
        else 
        {
            cout << "YES" << '\n';
            for(int i=1; i<=n/2; i++) // from 1 to n/2 coz half even and half odd digits are to be printed
            {
                cout << i*2 << " ";
            }
            for(int i=1; i<n/2; i++)
            {
                cout << (i*2)-1 << " "; 
            }
            cout << 3*(n/2) - 1 << '\n'; // to get equal sum on both sides added n/2 to the right side
        }
    }

    return 0;
}