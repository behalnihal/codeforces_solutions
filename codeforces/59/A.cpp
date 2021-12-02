#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin>>s;

    int capital=0, small=0;
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i])) capital++;
        else small++;
    }
    if(capital>small)
    {
        transform(s.begin(),s.end(), s.begin(), ::toupper);
        cout << s;
    }
    else 
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }


    return 0;
}