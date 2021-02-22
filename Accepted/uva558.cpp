#include<bits/stdc++.h>
#define ll long long int
#define inf 99999
using namespace std;
#define ipair pair<int,pair<int,int>>
bool cycle(vector<ipair> v, int s,int n, int m){
    vector<int>d(inf,n);
    d[s]=0;
    for(int i=1; i<n; ++i){
        for(int j=0; j<m; ++j){
            int t=v[j].first;
            int u=v[j].second.first;
            int vv=v[j].second.second;
            if(d[vv]>d[u]+t){
                d[vv]=d[u]+t;
            }
        }
    }
    for(int j=0; j<m; ++j){
            int t=v[j].first;
            int u=v[j].second.first;
            int vv=v[j].second.second;
            if(d[vv]>d[u]+t){
                return true;
            }
    }
    return false;
}
int main()
{
    int T;
    cin >> T;
    while(T--){
        int n,m;
        cin >> n >> m;
        vector<ipair>adj;
        vector<pair<int,int>>pv;
        for(int i=0; i<m; ++i){
            int t,u,v;
            cin >> u >> v >> t;
            adj.push_back(make_pair(t,make_pair(u,v)));
            if(t<0)
                pv.push_back(make_pair(u,v));
        }
        bool y=false;
        for(int i=0; i<pv.size(); ++i){
            if(cycle(adj,pv[i].first,n,m)){
                y=true;
                break;
            }
        }
        if(y)
            cout << "possible\n";
        else
            cout << "not possible\n";
    }
    return 0;
}
