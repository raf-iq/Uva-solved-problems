
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool line=false;
    while(cin >> n){
        string name[n];
        map<string,int>gift;
        for(int i=0; i<n; ++i){
            cin>>name[i];
            gift[name[i]]=0;
        }
        string subName;
        int spent,num;
        for(int i=0; i<n; ++i){
            cin >> subName >> spent >> num;
            gift[subName]-=spent;
            if(num){
                int div=spent/num;
                gift[subName]+=spent-(div*num);
                for(int j=0; j<num; ++j){
                    cin >> subName;
                    gift[subName]+=div;
                }
            }
            else {
                gift[subName]+=spent;
            }
        }
        if(line)
            cout << endl;
        line=true;
        for(int i=0; i<n; ++i){
            cout << name[i] << " " << gift[name[i]] << endl;
        }
    }
    return 0;
}
