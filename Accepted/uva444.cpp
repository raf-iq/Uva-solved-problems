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

int main()
{
    string code;
    while(getline(cin,code)){
        if(code[0]>='0' && code[0]<='9'){
            for(int i=code.size()-1; i>=0; i--){
                if(code[i]=='1'){
                    string s="";
                    s+=code[i];
                    s+=code[i-1];
                    s+=code[i-2];
                    cout << (char)(toNum(s));
                    i-=2;
                }else {
                    string s="";
                    s+=code[i];
                    s+=code[i-1];
                    cout << (char)(toNum(s));
                    i-=1;
                }
            }
            cout << endl;
        }
        else {
            for(int i=code.size()-1; i>=0; --i){
                int n=int(code[i]);
                while(n){
                    cout << n%10;
                    n/=10;
                }
            }
            cout << endl;
        }
    }
    return 0;
}

