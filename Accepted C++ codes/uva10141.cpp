#include <bits/stdc++.h>
#define ll long long int
using namespace std;
struct proposal{
    int idx,type;
    string companyName;
    double rate;
};
bool comp(proposal a,proposal b){
    if(a.type==b.type)
        if(a.rate==b.rate)
            return a.idx < b.idx;
        else
            return a.rate < b.rate;
    else
        return a.type > b.type;
}
int main()
{
    int n,p,test=1;
    bool newLine=false;
    while(cin >> n >> p){
        if(n==0 && p==0)
            break;
        if(newLine){
            cout << endl;
        }
        newLine=true;
        getchar();
        string s;
        for(int i=0;i<n; ++i){
            getline(cin,s);
        }
        proposal proposed[p];
        for(int i=0; i<p; ++i){
            getline(cin,s);
            int r;
            double rate;
            cin >> rate >> r;
            getchar();
            proposed[i].companyName=s;
            proposed[i].rate=rate;
            proposed[i].idx=i;
            proposed[i].type=r;
            for(int j=0; j<r; ++j){
                getline(cin,s);
            }
        }
        sort(proposed,proposed+p,comp);
        cout << "RFP #" << test++ << endl;
        cout << proposed[0].companyName << endl;
    }
    return 0;
}




