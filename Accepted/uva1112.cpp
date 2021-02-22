#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int exitMiceMaze(list<pair<int,int> > adj[],int n,int e,int t){
    vector<int> dist(n+2,INT_MAX);
    dist[e]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > pq;
    pq.push(make_pair(0,e));
    while(!pq.empty()){
        int u=pq.top().second;
        pq.pop();
        for(list<pair<int,int>>::iterator it=adj[u].begin(); it!=adj[u].end(); ++it){
            int v=it->first;
            int w=it->second;
            if(dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
                pq.push(make_pair(dist[v],v));
            }
        }
    }
    int ans=0;
    for(auto i=dist.begin(); i!=dist.end(); ++i){
        if(*i <= t)
            ans++;
    }
    return ans;
}
int main()
{
    int T;
    cin >> T;
    while(T--){
        int n,e,t,m;
        cin >> n >> e >> t >> m;
        list<pair<int,int>> *adj=new list<pair<int,int> > [n+3];
        for(int i=0; i<m; ++i){
            int u,v,w;
            cin >> u >> v >> w;
            adj[v].push_back(make_pair(u,w));
        }
        cout << exitMiceMaze(adj,n,e,t) << endl;
        if(T){
            cout << endl;
        }
    }
    return 0;
}

