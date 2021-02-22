#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isDigit(char c){
    if(c>='0' && c<='9')
        return true;
    return false;
}
bool isChar(char c){
    if((c>='a' && c<='z') || (c>='A' && c<='Z') || c=='-')
        return true;
    return false;
}
int main()
{
    string longest;
    int len=0;
    string s;
    while(cin >> s){
        if(s=="E-N-D")
            break;
        int l=0;
        bool y=false;
        string ss="";
        for(int i=0; i<s.size(); ++i){
            if(isChar(s[i])){
                l++;
                ss+=s[i];
            }
            else if(isDigit(s[i])){
                y=true;
                break;
            }
        }
        if(!y && len < l){
            len=l;
            longest=ss;
        }
    }
    for(int i=0; i<longest.size(); ++i){
        cout << (char)tolower(longest[i]);
    }
    cout << endl;
    return 0;
}

