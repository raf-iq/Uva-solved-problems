#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool comp(pair<string,int> a,pair<string,int> b){
    if(a.second==b.second){
        return a.first < b.first;
    }
    else
        return a.second < b.second;
}
int main()
{
    int T;
    cin >> T;
    getchar();
    while(T--){
        string name;
        getline(cin,name);
        int m,n,b;
        cin >> m >> n >> b;
        map<string,int> ingrediant;
        for(int i=0; i<m; ++i){
            string ing;
            int c;
            cin >> ing >> c;
            ingrediant[ing]=c;
        }
        getchar();
        vector<pair<string,int>>item;
        for(int i=0; i<n; ++i){
            string itemName;
            getline(cin,itemName);
            int q;
            cin >> q;
            int totalCost=0;
            for(int j=0; j<q; ++j){
                string s;
                int x;
                cin >> s >> x;
                totalCost+=ingrediant[s]*x;
            }
            getchar();
            item.push_back(make_pair(itemName,totalCost));
        }
        sort(item.begin(),item.end(),comp);
        for(int i=0; i<name.size(); ++i){
            cout << char(toupper(name[i]));
        }
        cout << endl;
        if(item[0].second > b){
            cout << "Too expensive!" << endl;
        }
        else {
            for(auto it=item.begin(); it!=item.end(); ++it){
                if(it->second <= b){
                    cout << it->first << endl;
                }
            }
        }
        cout << endl;
    }
    return 0;
}

