#include<bits/stdc++.h>
#define ll long long int
#define inf INT_MAX
using namespace std;
void dijkstra(list<pair<ll,ll>>g[],ll s,ll t,ll n){
    vector<ll>dist(n+1,inf);
    dist[s]=0;
    priority_queue<pair<ll,ll> , vector<pair<ll,ll>>, greater<pair<ll,ll>> > pq;
    pq.push(make_pair(0,s));
    while(!pq.empty()){
        ll u=pq.top().second;
        pq.pop();
        for(auto it=g[u].begin(); it!=g[u].end(); ++it){
            ll v=it->first;
            ll w=it->second;
            if(dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
                pq.push(make_pair(dist[v],v));
            }
        }
    }
    if(dist[t]==inf)
        cout << "unreachable" << endl;
    else
        cout << dist[t] << endl;
}
int main()
{
    int T,test=1;
    cin >> T;
    while(T--){
        ll n,m,s,t;
        cin >> n >> m >> s >> t;
        list<pair<ll,ll> > graph[n+2];
        for(ll i=0; i<m; ++i){
            ll u,v,w;
            cin >> u >> v >> w;
            graph[u].push_back(make_pair(v,w));
            graph[v].push_back(make_pair(u,w));
        }
        cout << "Case #" << test++ << ": ";
        dijkstra(graph,s,t,n);
    }
    return 0;
}

