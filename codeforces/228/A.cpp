#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a[4];
    for(int i=0; i<4; ++i)
    {
        cin>>a[i];
    }
    set<int> colors(begin(a), end(a));

    cout << 4 - colors.size();
    return 0;
}