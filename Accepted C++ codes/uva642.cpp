#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    vector<string> in;
    string s;
    while(cin >> s){
        if(s=="XXXXXX")
            break;
        in.push_back(s);
    }
    while(cin >> s){
        if(s=="XXXXXX")
            break;
        bool paichi=false;
        int siz=s.size();
        sort(s.begin(),s.end());
        do{
            if(find(in.begin(),in.end(),s)!=in.end()){
                cout << s << endl;
                paichi=true;
            }
        }while(next_permutation(s.begin(),s.end()));
        if(!paichi)
            cout << "NOT A VALID WORD\n";
        cout << "******\n";
    }


    return 0;
}

