#include<bits/stdc++.h>
#define ll long long int
#define ipair pair<int,int>
using namespace std;
int find_parent(int parent[],int i){
    if(parent[i]==i)
        return i;
    return find_parent(parent,parent[i]);
}
void set_parent(int parent[],int u,int v){
    parent[u]=parent[v];
}
int main()
{
    int n,m;
    while(cin >> n >> m){
        if(n==0 && m==0)
            break;
        vector<pair<int,ipair>>link;
        for(int i=0; i<m; ++i){
            int u,v,w;
            cin >> u >> v >> w;
            link.push_back(make_pair(w,make_pair(u,v)));
        }
        sort(link.begin(),link.end());
        int parent[n+2];
        for(int i=0; i<=n; ++i){
            parent[i]=i;
        }
        vector<int> cycle;
        for(int i=0; i<link.size(); ++i){
            int a=find_parent(parent,link[i].second.first);
            int b=find_parent(parent,link[i].second.second);
            if(a!=b){
                set_parent(parent,a,b);
            }
            else {
                cycle.push_back(link[i].first);
            }
        }
        sort(cycle.begin(),cycle.end());
        if(cycle.size()==0){
            cout << "forest" << endl;
        }
        else{
            for(int i=0; i<cycle.size()-1; ++i){
                cout << cycle[i] << " ";
            }
            cout << cycle[cycle.size()-1] << endl;
        }
    }
    return 0;
}

