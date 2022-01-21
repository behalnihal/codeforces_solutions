#include"bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        bool flag = false;
        for(int i=s.size() - 2; i>=0; i--)
        {
            int a = s[i] - '0';
            int b = s[i+1] - '0';

            int sum = a + b;

            if(sum >= 10){
                int l = sum/10;
                int r = sum%10;

                s[i] = l + '0';
                s[i+1] = r + '0';
                flag = true;
                break;
            }
        }

        if(flag){ cout << s << '\n'; continue;}

        s[1] += s[0] - '0';
        cout << s.substr(1) << '\n';

    }

    return 0;
}