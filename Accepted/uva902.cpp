#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    string code;
    while(cin >> n >> code){
        map<string,int>mp;
        string sub;
        for(int i=0; i<code.size()-n+1; ++i){
            sub=code.substr(i,n);
            mp[sub]++;
        }
        int max_sub=0;
        for(map<string,int>::iterator it=mp.begin();it!=mp.end(); ++it){
            if(max_sub < it->second){
                max_sub=it->second;
                sub=it->first;
            }
        }
        cout << sub << endl;

    }
    return 0;
}

