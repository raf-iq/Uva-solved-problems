#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int T;
    bool newLine=false;
    cin >> T;
    getchar();
    while(T--){
        getchar();
        if(newLine)
            cout << endl;
        newLine=true;
        string text,codedText;
        getline(cin,text);
        getline(cin,codedText);
        map<char,int> m1,m2;
        map<int,char>_m1,_m2;
        map<char,char>mp;
        for(int i=0; i<text.size(); ++i){
            m1[text[i]]++;
        }
        for(int i=0; i<codedText.size(); ++i){
            m2[codedText[i]]++;
        }
        for(map<char,int>::iterator it=m1.begin(); it!=m1.end();++it){
            _m1[it->second]=it->first;
        }
        for(map<char,int>::iterator it=m2.begin(); it!=m2.end();++it){
            _m2[it->second]=it->first;
        }
        for(map<int,char>::iterator it1=_m1.begin(),it2=_m2.begin();it1!=_m1.end(); ++it1,++it2){
            mp[it2->second]=it1->second;
        }
        for(int i=0; i<codedText.size(); ++i){
            cout << mp[codedText[i]];
        }
        cout << endl;
    }
    return 0;
}

