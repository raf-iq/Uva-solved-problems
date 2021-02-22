#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int T,test=1;
    cin >> T;
    while(T--){
        map<int,int> hashCode;
        int n,ip;
        vector<int> f[3];
        for(int j=0; j<3; ++j){
                cin >> n;
            for(int i=0; i<n; ++i){
                cin >> ip;
                f[j].push_back(ip);
                hashCode[ip]++;
            }
        }
        vector<int>prob_solved[3];
        for(int j=0; j<3; ++j){
            for(int i=0; i<f[j].size(); ++i){
                if(hashCode[f[j][i]]==1){
                    prob_solved[j].push_back(f[j][i]);
                }
            }
        }
        cout << "Case #" << test++ << ":\n";
        int max_soled=max(int(prob_solved[0].size()),max(int(prob_solved[1].size()),int(prob_solved[2].size())));
        for(int i=0; i<3; ++i){
            if(prob_solved[i].size()==max_soled){
                sort(prob_solved[i].begin(),prob_solved[i].end());
                cout << i+1 << " " << max_soled;
                for(int j=0; j<max_soled; ++j){
                    cout <<  " " << prob_solved[i][j];
                }
                cout << endl;
            }
        }
    }
    return 0;
}

