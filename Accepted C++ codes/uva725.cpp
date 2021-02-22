
#include<bits/stdc++.h>
using namespace std;
bool __divAns(int up,int down){
    vector<int>v;
    set<int>s;
    int d=down;
    if(down < 10000)
    {
        v.push_back(0);
        s.insert(0);
    }
    while(up){
        int i=up%10;
        v.push_back(i);
        s.insert(i);
        up/=10;
    }
    while(down)
    {
        int i=down%10;
        v.push_back(i);
        s.insert(i);
        down/=10;
    }
    if(v.size()==10 && s.size() == 10){
        return true;
    }
    if(d<10000 && v.size()==9 && s.size()==9)
        return true;
    return false;
}
int main()
{
    int N;
    bool line=false;
    while(cin >> N){
        if(N==0)
            break;
        if(line)
            cout << endl;
        line=true;
        map<int,int>mp;
        for(int i=1000; i<100000; ++i){
            int n=N*i;
            if(n>9999 && n<100000){
                if(__divAns(n,i))
                    mp[n]=i;
            }
        }
        if(mp.size()!=0){
            for(map<int,int>::iterator it=mp.begin(); it!=mp.end();++it){
                cout << it->first << " / " ;
                int i=it->second;
                if(i<10000)
                    cout << "0" << i;
                else
                    cout << i ;
                cout << " = " << N << endl;
            }
        }
        else
            cout << "There are no solutions for " << N << ".\n";
    }
    return 0;
}
