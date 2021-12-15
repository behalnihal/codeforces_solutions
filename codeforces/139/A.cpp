#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    int days[7];
    for(int i=0; i<7; i++)
    {
        cin>>days[i];
    }

    for(int i=0; i<7; i++)
    {
        n -= days[i];
        if(n<=0) 
        {
            cout << i+1 << '\n';
            break;
        }
        if(i==6) i=-1;
    }
    return 0;
}