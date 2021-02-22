#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void dijkstra(map<char,vector<pair<char,int>>> link,char s,char d){
    map<char,int> dist;
    map<char,char> parent;
    for(auto i=link.begin(); i!=link.end(); ++i){
        dist[i->first]=INT_MAX;
    }
    queue<pair<char,int>> q;
    dist[s]=0;
    parent[s]=s;
    q.push(make_pair(s,0));
    while(!q.empty()){
        char u=q.front().first;
        q.pop();
        vector<pair<char,int>> vec=link[u];
        for(auto it=vec.begin(); it!=vec.end(); ++it){
            if(dist[it->first] > dist[u]+it->second){
                dist[it->first]=dist[u]+it->second;
                parent[it->first]=u;
            q.push(make_pair(it->first,dist[it->first]));
            }
        }
    }
    vector<char> path;
    while(parent[d]!=d){
        path.push_back(d);
        d=parent[d];
    }
     path.push_back(s);
    reverse(path.begin(),path.end());
    for(int i=0; i<path.size()-1; ++i)
        cout << path[i] << " ";
    cout << path[path.size()-1] << endl;
}
int main()
{
    int s,p;
    while(cin >> s >> p){
        map<char,vector<pair<char,int>>> link;
        for(int i=0; i<p; ++i){
            char u,v;
            int w;
            cin >> u >> v >> w;
            vector<pair<char,int>> vv=link[u];
            vv.push_back(make_pair(v,w));
            link[u]=vv;
            vector<pair<char,int>> uu=link[v];
            uu.push_back(make_pair(u,w));
            link[v]=uu;
        }
        int q;
        cin >> q;
        for(int i=0; i<q; ++i){
            char source,destination;
            cin >> source >>  destination;
            dijkstra(link,source,destination);
        }
    }
    return 0;
}

