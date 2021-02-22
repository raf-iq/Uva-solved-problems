#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n,m;
    while(cin >> m >> n){
        map<string,int>hay_point;
        string job;
        int taka;
        for(int i=0; i<m; ++i){
            cin >> job >> taka;
            hay_point[job]=taka;
        }
        for(int i=0; i<n; ++i){
            ll total_taka=0;
            while(1){
                cin >> job;
                if(job==".")
                    break;
                if(hay_point.find(job)!=hay_point.end())
                    total_taka+=hay_point[job];
            }
            cout << total_taka << endl;
        }
    }
    return 0;
}

