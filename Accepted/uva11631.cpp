#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int mstByPrimAlgo(list<pair<int,int>> *adj,int m){
    vector<int> dist(m+3,INT_MAX);
    dist[0]=0;
    priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>> > pq;
    pq.push(make_pair(0,0));
    int sum=0;
    map<int,bool>mst;
    while(!pq.empty()){
        int u=pq.top().second;
        if(mst.find(u)==mst.end()){
            sum+=pq.top().first;
            mst[u]=true;
        }
        pq.pop();
        for(auto it=adj[u].begin(); it!=adj[u].end(); ++it){
            if(mst.find(it->first)==mst.end() && dist[it->first] > it->second){
                dist[(*it).first]=(*it).second;
                pq.push(make_pair(dist[(*it).first],it->first));
            }
        }
    }
    return sum;
}
int main()
{
    int m,n;
    while(cin >> m >> n){
        if(m==0 && n==0)
            break;
        list<pair<int,int>> *adj=new list<pair<int,int>> [m+2];
        int initCost=0;
        for(int i=0; i<n; ++i){
            int u,v,w;
            cin >> u >> v >> w;
            initCost+=w;
            adj[u].push_back(make_pair(v,w));
            adj[v].push_back(make_pair(u,w));
        }
        int mstCost=mstByPrimAlgo(adj,m);
        cout << initCost-mstCost << endl;
    }
    return 0;
}

