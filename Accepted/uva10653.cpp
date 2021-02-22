#include<bits/stdc++.h>
using namespace std;
#define INF 2<<22
class Graph{
private:
    int V;
    list<int> *adj;
public:
    Graph(int v){
        V=v;
        adj= new list<int>[V+1];
    }
    void addEdge(int v,int w){
        adj[v].push_back(w);
        ///adj[w].push_back(v);
    }
    void BFS(int s,int d){
        int *dist=new int[V+1];
        int *parent=new int[V+1];
        for(int i=0; i<=V; ++i){
            dist[i]=INF;
            parent[i]=-1;
        }
        list<int>q;
        q.push_back(s);
        dist[s]=0;

        list<int>::iterator it;
        while(!q.empty()){
            int u=q.front();
            q.pop_front();
            for(it=adj[u].begin(); it!=adj[u].end(); ++it){
                if(dist[*it]==INF){
                    dist[*it]=dist[u]+1;
                    parent[*it]=u;
                    q.push_back(*it);
                }
            }
        }
       cout << findShortestPath(s,d,parent) << endl;
    }
    int findShortestPath(int s, int d,int parent[]){
        if(s==d || d==-1)
            return 0;
        else {
            return 1+findShortestPath(s,parent[d],parent);
        }
    }

};
int main()
{
    int r,c;
    while(cin >> r >> c){
        if(r==0 && c==0)
            break;
        int row;
        cin >> row;
        int arr[r+3][c+3];
        memset(arr,0,sizeof(arr));
        int nodNum=1;
        for(int i=1; i<=r; ++i){
            for(int j=1; j<=c; ++j)
                arr[i][j]=nodNum++;
        }

        Graph g(r*c);
        for(int i=1; i<=row; ++i){
            int _r,_c;
            cin >> _r >> _c;
            for(int j=1; j<=_c; ++j){
                int J;
                cin >> J;
                arr[_r+1][J+1]=0;
            }
        }
        int s1,s2,d1,d2;
        cin >> s1 >> s2 >> d1 >> d2;
        for(int i=1; i<=r; ++i){
            for(int j=1; j<=c; ++j){
                if(arr[i][j]!=0 && arr[i-1][j]!=0)
                    g.addEdge(arr[i][j],arr[i-1][j]);
                if(arr[i][j]!=0 && arr[i+1][j]!=0)
                    g.addEdge(arr[i][j],arr[i+1][j]);
                if(arr[i][j]!=0 && arr[i][j-1]!=0)
                    g.addEdge(arr[i][j],arr[i][j-1]);
                if(arr[i][j]!=0 && arr[i][j+1]!=0)
                    g.addEdge(arr[i][j],arr[i][j+1]);
            }
        }
        g.BFS(arr[s1+1][s2+1],arr[d1+1][d2+1]);
    }

    return 0;
}


