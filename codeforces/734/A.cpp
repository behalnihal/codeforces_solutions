#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    string s;
    cin>>s;
    int cntA= count(s.begin(), s.end(), 'A');
    int cntD= count(s.begin(), s.end(), 'D');

    if(cntA > cntD) cout << "Anton" << "\n";
    else if(cntA < cntD) cout << "Danik" << "\n";
    else cout << "Friendship" << "\n";

    return 0;
    
}