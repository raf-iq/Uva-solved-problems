#include<bits/stdc++.h>
#define ll long long int
using namespace std;
string typeWtiter[]={"...","qaz","wsx","edc",
                    "rfvtgb"," "," ","yhnujm",
                    "ik,","ol.","p;/","..."
                    };
bool canWrite(string s,int hand[],int f){
    for(int i=0; i<f; ++i){
        string letter=typeWtiter[hand[i]];
        for(int j=0; j<letter.size(); ++j){
            for(int k=0; k<s.size(); ++k){
                if(letter[j]==s[k]){
                    return false;
                }
            }
        }
    }
}
int main()
{
    int f,n;
    while(cin >> f >> n){
        int hand[f],longestWord=0;
        string s;
        vector<string>word;
        for(int i=0; i<f; ++i)
            cin >> hand[i];
        for(int i=0;i<n;++i){
            cin >> s;
            if(canWrite(s,hand,f)){
                word.push_back(s);
                longestWord=max(longestWord,(int)s.size());
            }
        }
        set<string>bossWord;
        for(int i=0; i<word.size(); ++i){
            if(word[i].size()==longestWord)
                bossWord.insert(word[i]);
        }
        cout << bossWord.size() << endl;
        for(set<string>::iterator it=bossWord.begin(); it!=bossWord.end();++it){
            cout << *it << endl;
        }
    }
    return 0;
}

