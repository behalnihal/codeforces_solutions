#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // f(n) = -1 + 2 - 3 + 4 - 5 + ......+((-1)^n) *n

    long long int n;
    cin>>n;
    long long int even_ans=n/2;  //if n is even f(n) returns n/2
    long long int odd_ans = -(n+1)/2; // if n is odd f(n) returns -(n+1)/2
    if(n%2==0) cout <<even_ans;
    else cout << odd_ans;

    return 0; 
}