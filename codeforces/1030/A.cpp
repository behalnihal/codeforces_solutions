#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int a[n];
    int hard = 0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1) hard++;
    }
    if (hard>0) cout << "HARD";
    else cout << "EASY";

    return 0;
}