#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int toNum(string n){
    int _n=0;
    for(int i=0; i<n.size(); ++i){
        _n=_n*10+n[i]-'0';
    }
    return _n;
}
bool is_num(char c){
    if(c>='0' && c<='9')
        return true;
    else
        return false;
}
bool is_alpha(char c){
    if(c>='A' && c <='Z')
        return true;
    else
        return false;
}
string codeWord(string s,int &i){
    string code="";
    while(i<s.size()){
        if(is_alpha(s[i])){
            code+=s[i++];
        }
        else
            break;
    }
    return code;
}
int numWord(string s,int &i){
    string n="";
    while(i<s.size()){
        if(is_num(s[i]))
            n+=s[i++];
        else
            break;
    }
    return toNum(n);
}
int main()
{
    int T,test=1;
    cin >> T;
    while(T--){
        string code;
        cin >> code;
        cout << "Case " << test++ << ": ";
        for(int i=0;i<code.size(); ){
            string decode=codeWord(code,i);
            int freq=numWord(code,i);
            for(int j=0; j<freq; ++j){
                cout << decode;
            }
        }
        cout << endl;
    }
    return 0;
}

