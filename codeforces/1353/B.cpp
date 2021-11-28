#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t,n,k;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        vector<int>a(n);   //used vector for using swap()
        vector<int>b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(a.begin(), a.end());  //sort a in increasing order
        sort(b.begin(), b.end(), greater<>());  // decreasing order

        for(int i=0; i<k; i++)
        {
            if(a[i]<b[i]) 
                swap(a[i], b[i]);
            else
                break;
        }
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += a[i];
        }
        cout << sum << '\n';
    }
    return 0;
}