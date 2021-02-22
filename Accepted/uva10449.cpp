#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int cube(int a){
    return a*a*a;
}
vector<ll> belmond(vector<pair<int,pair<int,int>> >adj,int n,int m){
    vector<ll> parent(n+3,INT_MAX);
    if(n==0)
        return parent;
    parent[1]=0;
    for(int i=1; i<n; ++i){
        for(int j=0; j<m; ++j){
            int u=adj[j].second.first;
            int v=adj[j].second.second;
            int w=adj[j].first;
            if(parent[v]> parent[u]+w && parent[u]!=INT_MAX){
                parent[v]=parent[u]+w;
            }
        }
    }
    for(int j=0; j<m; ++j){
        int u=adj[j].second.first;
        int v=adj[j].second.second;
        int w=adj[j].first;
        if(parent[v]> parent[u]+w && parent[u]!=INT_MAX){
            parent[v]=-INT_MIN;
        }
    }
    return parent;
}

int main()
{
    int n,test=1;
    while(scanf("%d",&n)==1){
        cout << "Set #" << test++ << endl;
        int ar[n+3];
        for(int i=1; i<=n; ++i){
            cin >> ar[i];
        }
        int m;
        cin >> m;
        vector<pair<int,pair<int,int>> >link;;
        for(int i=0; i<m; ++i){
            int u,v;
            cin >> u >> v;
            int w=cube(ar[v]-ar[u]);
            link.push_back(make_pair(w,make_pair(u,v)));
        }
        vector<ll> parent=belmond(link,n,m);
        int q;
        cin >> q;
        for(int i=0; i<q; ++i){
            int qr;
            cin >> qr;
            int ans=parent[qr];
            if(parent[qr]<3 || parent[qr]==INT_MAX){
                cout << "?" << endl;
            }
            else {
                cout << parent[qr] << endl;
            }
        }
    }
    return 0;
}
