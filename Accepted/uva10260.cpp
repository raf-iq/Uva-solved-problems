#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    map<char,int>soundex;
    soundex['B']=1;
    soundex['F']=1;
    soundex['P']=1;
    soundex['V']=1;

    soundex['C']=2;
    soundex['G']=2;
    soundex['J']=2;
    soundex['K']=2;
    soundex['Q']=2;
    soundex['S']=2;
    soundex['X']=2;
    soundex['Z']=2;

    soundex['D']=3;
    soundex['T']=3;

    soundex['L']=4;

    soundex['M']=5;
    soundex['N']=5;

    soundex['R']=6;

    string soundCode;
    while(cin >> soundCode){
        int a=0;
        for(int i=0; i<soundCode.size(); ++i){
            if(soundex.find(soundCode[i])!=soundex.end()){
                int b=soundex[soundCode[i]];
                if(a!=b){
                    cout << b;
                    a=b;
                }
            }
            else {
                a=0;
            }
        }
        cout << endl;
    }
    return 0;
}

