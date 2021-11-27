#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,h;
    cin>>n>>h;
    int width=0;
    int friends[n];
    for(int i=0; i<n; i++)
    {
        cin>>friends[i];
        if(friends[i]<=h) width++;
        else width = width + 2;
    }
    cout << width << "\n";

    return 0;
}