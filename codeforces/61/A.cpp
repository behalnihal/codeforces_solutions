#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string A;
    string B;
    cin>>A;
    cin>>B;

    string C = {};
    char Zero = '0';
    char One = '1';

    for(int i = 0; i< A.size(); i++)
    {
        if(A[i] == B[i]) C = C + Zero;
        else C = C+One;
    }
    cout << C;

    return 0;
}