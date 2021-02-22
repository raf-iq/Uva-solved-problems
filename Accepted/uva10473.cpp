#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll decimalNumber(string d){
    ll a=0;
    for(int i=0; i<d.size(); ++i){
        a=a*10+d[i]-'0';
    }
    return a;
}
string decimalToHexadecimal(ll decimal){
    string s="";
    if(decimal==0)
        return "0";
    while(decimal){
        ll a=decimal%16;
        if(a<10){
            s+=(char)(a+'0');
        }
        else {
            s+=(char)(a+55);
        }
        decimal/=16;
    }
    reverse(s.begin(),s.end());
    return s;
}
ll pow(int i){
    ll p=1;
    for(int j=0; j<i; ++j){
        p*=16;
    }
    return p;
}
ll hexaToDecimal(string hex){
    ll dec=0;
    for(int i=hex.size()-1,j=0; i>=2; --i){
        if(hex[i]>='0' && hex[i]<='9'){
            dec+=(hex[i]-'0')*pow(j++);
        }
        else {
            dec+=(hex[i]-55)*pow(j++);
        }
    }
    return dec;
}
int main()
{
    string s;
    while(cin >> s){
        if(s[0]=='-')
            break;
        if(s[0]=='0' && s.size()>1)
            cout << hexaToDecimal(s) << endl;
        else {
            ll d=decimalNumber(s);
            cout << "0x" << decimalToHexadecimal(d) << endl;
        }
    }
    return 0;
}

