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
        int n;
        cin>>n;

        vector<int> a(n);
        for(auto &x : a) cin>>x;
        sort(a.begin(), a.end());
        int count = 0, i = 1;
        while(count < n/2)
        {
            cout << a[i] << " " << a[0] << '\n';
            count++;i++;
        }
    }

    return 0;
}