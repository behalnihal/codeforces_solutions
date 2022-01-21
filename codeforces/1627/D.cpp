#include "bits/stdc++.h"
using namespace std;

const int MXN = 1e6 + 3;
int best_gcd[MXN];
bool in[MXN];
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int x, i = 0; i < n; i++) {
        cin >> x; in[x] = true;
    }
    int count = 0;
    for(int i = 1; i < MXN; i++) {
        for(int j = i; j < MXN; j += i)
            if(in[j])
                best_gcd[i] = __gcd(best_gcd[i], j);
        count += best_gcd[i] == i;
    }
    cout << count - n << '\n';
    return 0;
}