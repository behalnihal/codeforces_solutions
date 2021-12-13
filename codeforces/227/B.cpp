#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 3;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long n,a,b,m, pos[N];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        pos[a] = i + 1;
    } 

    long long vasya = 0, petya = 0;
    cin>>m;
    

    while (m--)
    {
        cin>>b;
        vasya += pos[b];
        petya += n - pos[b] + 1;
    }
    

    cout << vasya << " " << petya << '\n';
    return 0;
}