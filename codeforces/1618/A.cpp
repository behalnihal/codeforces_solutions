#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long t, arr[7];
    cin>>t;

    while(t--)
    {
        for(int i=0; i<7; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+7);
        if((arr[0] + arr[1]) == arr[2]){
            cout << arr[0] << " " << arr[1] << " " << arr[3] << '\n';
        }
        else cout << arr[0] << " " << arr[1] << " " << arr[2] << '\n';
    }


    return 0;
}