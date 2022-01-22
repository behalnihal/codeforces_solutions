#include"bits/stdc++.h"
using namespace std;

string mostFrequent(string a[], int n)
{
    unordered_map<string, int> hash;
    for(int i=0; i<n; i++) hash[a[i]]++;

    int max_count = 0;
    string res = "";

    for(auto i : hash){
        if(max_count < i.second){
            res = i.first;
            max_count = i.second;
        }
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin>>n;

    string a[n];
    for(auto &x : a) cin>>x;

    cout << mostFrequent(a, n);
    return 0;
}