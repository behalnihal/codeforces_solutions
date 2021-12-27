#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<pair<int,int> > primes = {{2,3},{3,5},{5,7},{7,11},{11,13},{13,17},{17,19},{19,23},{23,29},{29,31},{31,37},{37,41},{41,43},{43,47}};
    int n,m;
    cin>>n>>m;
    bool found = false;
    for(int i=0; i<16; i++)
    {
        if(n==primes[i].first && m==primes[i].second) found = true;
        else found;
    }
    found==1 ? cout << "YES" : cout<< "NO";
    return 0;
}