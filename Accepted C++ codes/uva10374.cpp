#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int T;
    bool newLine=false;
    cin >> T;
    while(T--){
        while(getchar()!='\n');
        if(newLine)
            cout << endl;
        newLine=true;
        map<string,string>team;
        map<string,int>vote;
        int n,m;
        cin >> n;
        while(getchar()!='\n');
        for(int i=0; i<n; ++i){
            string candidate,party;
            getline(cin,candidate);
            getline(cin,party);
            team[candidate]=party;
        }
        cin >> m;
        while(getchar()!='\n');
        for(int i=0; i<m; ++i){
            string name;
            getline(cin,name);
            if(team.find(name)!=team.end())
                vote[name]++;
        }
        int max_vote=INT_MIN;
        for(map<string,int>::iterator it=vote.begin();it!=vote.end();++it){
            max_vote=max(max_vote,it->second);
        }
        string winner;
        int tie=0;
        for(map<string,int>::iterator it=vote.begin();it!=vote.end();++it){
            if(it->second==max_vote){
                if(tie==1){
                    tie=2;
                    break;
                }
                winner=it->first;
                tie=1;
            }
        }
        if(tie==0 || tie==2)
            cout << "tie\n";
        else
            cout << team[winner] << endl;
    }
    return 0;
}

