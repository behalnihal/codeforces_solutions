#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int p[n];
    double orange = 0;
    
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
        orange += p[i];
    }
    cout << orange/n;

    return 0;
}