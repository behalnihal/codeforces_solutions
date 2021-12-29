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
        int n,m,rb,cb,rd,cd;
        cin>>n>>m>>rb>>cb>>rd>>cd;
        // cb<=cd ? cout<< (cb-cd)<< '\n' : cout << (2*n-(cb+cd)) << '\n';
        cout << min(rb <= rd ? rd - rb : 2 * n - rb - rd,
            cb <= cd ? cd - cb : 2 * m - cb - cd) << '\n';
    }

    return 0;
}