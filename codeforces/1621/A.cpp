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
        int n,k;
        cin>>n>>k;
        
        if(k > ceil((double)n/2)) cout << -1 << '\n';
        else{
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(i==j && i%2==0 && k>0){
                        cout << 'R';
                        k--;
                    }
                    else cout << '.';
                }
                cout << '\n';
            }
        }
    }

    return 0;
}