#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    getchar();
    while(T--){
        string line;
        getline(cin,line);
        map<char,int>mp;
        for(int i=0; i<line.size();++i){
            if(isalpha(line[i])){
                mp[tolower(line[i])]++;
            }
        }
        int max_letter_fre=0;
        for(auto i=mp.begin();i!=mp.end();++i){
            max_letter_fre=max(max_letter_fre,i->second);
        }
        for(auto i=mp.begin();i!=mp.end();++i){
            if(i->second==max_letter_fre)
                cout << i->first;
        }
        cout << endl;
    }
    return 0;
}

