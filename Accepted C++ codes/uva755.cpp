#include <bits/stdc++.h>
#define ll long long int

using namespace std;
map<char,char>mapped;
void buildUpMap(){
    mapped['A']='2';
    mapped['B']='2';
    mapped['C']='2';

    mapped['D']='3';
    mapped['E']='3';
    mapped['F']='3';

    mapped['G']='4';
    mapped['H']='4';
    mapped['I']='4';

    mapped['J']='5';
    mapped['K']='5';
    mapped['L']='5';

    mapped['M']='6';
    mapped['N']='6';
    mapped['O']='6';

    mapped['P']='7';
    mapped['R']='7';
    mapped['S']='7';

    mapped['T']='8';
    mapped['U']='8';
    mapped['V']='8';

    mapped['W']='9';
    mapped['X']='9';
    mapped['Y']='9';
    for(char i='0'; i<='9'; ++i){
        mapped[i]=i;
    }
}
int main()
{
    buildUpMap();
    int T;
    cin >> T;
    getchar();
    while(T--){
        while(getchar()!='\n');
        int n;
        cin >> n;
        map<string,int>phoneMap;
        for(int I=0; I<n; ++I){
            string phoneNo;
            cin >> phoneNo;
            string sub="";
            for(int i=0; i<phoneNo.size(); ++i){
                if(sub.size()==3){
                    sub+="-";
                }
                if(phoneNo[i]!='-'){
                    sub+=mapped[phoneNo[i]];
                }
            }
            phoneMap[sub]++;
        }
        bool no_dup=false;
        for(auto it=phoneMap.begin();it!=phoneMap.end(); ++it){
            if(it->second >1){
                cout << it->first << " " << it->second << endl;
                no_dup=true;
            }
        }
        if(!no_dup)
            cout << "No duplicates.\n";

        if(T!=0)
            cout << endl;
    }
    return 0;
}

