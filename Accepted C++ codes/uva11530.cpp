#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    map<char,int>sms;
    sms[' ']=1;
    sms['a']=1;
    sms['d']=1;
    sms['g']=1;
    sms['j']=1;
    sms['m']=1;
    sms['p']=1;
    sms['t']=1;
    sms['w']=1;
    sms['b']=2;
    sms['e']=2;
    sms['h']=2;
    sms['k']=2;
    sms['n']=2;
    sms['q']=2;
    sms['u']=2;
    sms['x']=2;
    sms['c']=3;
    sms['f']=3;
    sms['i']=3;
    sms['l']=3;
    sms['o']=3;
    sms['r']=3;
    sms['v']=3;
    sms['y']=3;
    sms['s']=4;
    sms['z']=4;
    int T,test=1;
    string msg;
    cin >> T;
    getchar();
    while(T--){
        getline(cin,msg);
        int no_press=0;
        for(int i=0;i<msg.size();++i){
            no_press+=sms[msg[i]];
        }
        cout << "Case #" << test++ << ": " << no_press << endl;
    }
    return 0;
}

