#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string>

using namespace std;
string _poetry_(string s,int &i){
    string l="";
    i++;
    while(i<s.size()){
        if(s[i]=='>' || s[i]=='<'){
            return l;
        }
        cout << s[i];
        l+=s[i];
        i++;
    }
    return l;
}
int main()
{
    int T;
    cin >> T;
    getchar();
    while(T--){
        string line1,line2;
        getline(cin,line1);
        getline(cin,line2);
        string s2,s3,s4,s5;
        int index;
        for(int i=0; i<line1.size(); ++i){
            if(line1[i]=='<'){
                index=i;
                break;
            }
            cout << line1[i];
        }
        s2=_poetry_(line1,index);
        s3=_poetry_(line1,index);
        s4=_poetry_(line1,index);
        s5=_poetry_(line1,index);
        cout << endl;
        for(int i=0; i<line2.size(); ++i){
            if(line2[i]=='.')
                break;
            cout << line2[i];
        }
        cout << s4 << s3 << s2 << s5 << endl;
    }
    return 0;
}


