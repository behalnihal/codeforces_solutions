#include"bits/stdc++.h"
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> adj(n+1);
        map<pair<int,int>,int> pos;

        vector<int> ans(n), deg(n+1, 0);
        vector<bool> vis(n+1,false);

        for(int i=1; i<=n-1; i++){
            int u,v;
            cin>>u>>v;

            adj[u].push_back(v);
            adj[v].push_back(u);

            deg[u]++;
            deg[v]++;

            pos[{u,v}] = i;
            pos[{v,u}] = i;
        }

        bool is = true;
        int s = -1 , e = -1;

        for(int i=1; i<=n; i++){
            if(deg[i]>=3){
                is = false;
                break;
            }

            if(deg[i]==1){
                if(s==-1) s = i;
                else e = i;
            }
        }

        if(!is){
            cout << - 1 << '\n';
            continue;
        }

        int currentNode = s;
        int weight = 2;

        while(currentNode != e){
            int nextNode = adj[currentNode][0];

            if(vis[nextNode]) nextNode = adj[currentNode][1];

            ans[pos[{currentNode,nextNode}]] = weight;

            if(weight == 2) weight = 3;
            else weight = 2;

            vis[currentNode] = 1;
            currentNode = nextNode;
        }

        for(int i=1; i<=n-1; i++) cout << ans[i] << " ";
        cout << '\n';


    }

    return 0;
}