#include<bits/stdc++.h>
#define SIZE 111
using namespace std;
int color[SIZE];
int white=1,gray=2;
list<int> *adj;
stack<int> topoStack;
void topo_sort(int u){
    color[u]=gray;
    for(list<int>::iterator it=adj[u].begin(); it!=adj[u].end(); ++it){
        if(color[*it]==white){
            topo_sort(*it);
        }
    }
    topoStack.push(u);
}
void topologicalSort(int vertics){
    for(int i=0;i<SIZE; ++i){
        color[i]=white;
    }
    for(int u=1; u<=vertics; ++u){
        if(color[u]==white){
            topo_sort(u);
        }
    }
}
void printTopoSorted(){
    while(topoStack.size()>1){
        cout << topoStack.top() << " ";
        topoStack.pop();
    }
    cout << topoStack.top() << endl;
    topoStack.pop();
}

int main()
{
    int n,m;
    while(cin >> n >> m){
        if(n==0 && m==0)
            break;
        adj=new list<int>[n+2];
        for(int i=0; i<m; ++i){
            int u,v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        topologicalSort(n);
        printTopoSorted();
    }
    return 0;
}

