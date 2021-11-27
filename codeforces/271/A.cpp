#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int y;
    cin>>y;
    
    for(int i=y+1;; i++)
    {
        string s = to_string(i);
        set<int> distict_digits(s.begin(), s.end());

        if(s.size() == distict_digits.size())
        {
            cout << i;
            break;
        }
    }
    return 0;
}