#include<bits/stdc++.h>
#define ll long long int
using namespace std;
list<int>*adj;
void dfs(int vis[],int s){
    vis[s]=1;
    for(auto it=adj[s].begin(); it!=adj[s].end(); ++it){
        if(!vis[*it])
            dfs(vis,*it);
    }
}
int main()
{
    int n,m,test=1;
    while(cin >> n >> m){
        if(n==0 && m==0)
            break;
        adj=new list<int>[n+1];
        for(int i=0; i<m; ++i){
            int u,v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int ssc=0;
        int vis[n+1];
        memset(vis,0,sizeof(vis));
        for(int i=1; i<=n; ++i){
            if(!vis[i]){
                ssc++;
                dfs(vis,i);
            }
        }
        cout << "Case " << test++ << ": " << ssc << endl;
    }
    return 0;
}

