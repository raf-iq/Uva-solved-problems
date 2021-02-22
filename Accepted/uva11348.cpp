#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    int T,test=1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        set<int>stamp[n];
        map<int,int>stamp_map;
        for(int i=0; i<n; ++i){
            int m,ip;
            cin >> m;
            for(int j=0; j<m; ++j){
                cin >> ip;
                stamp[i].insert(ip);
            }
            for(auto I=stamp[i].begin(); I!=stamp[i].end(); ++I){
                stamp_map[*I]++;
            }
        }
        double total_unique_stamp=0;
        vector<int>unique_stamp;
        for(int i=0; i<n; ++i){
            int count_stamp=0;
            for(auto it=stamp[i].begin();it!=stamp[i].end(); ++it){
                if(stamp_map[*it]==1){
                    count_stamp++;
                }
            }
            total_unique_stamp+=count_stamp;
            unique_stamp.push_back(count_stamp);
        }
        cout << "Case " << test++ << ":";
        if(total_unique_stamp==0)
            cout << " " << endl;
        else {
            for(auto i=0; i<unique_stamp.size(); ++i){
                cout << setprecision(6) << fixed << showpoint << " " << (unique_stamp[i]/total_unique_stamp)*100 << "%";
            }
            cout << endl;
        }
    }
    return 0;
}

