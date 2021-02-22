#include<bits/stdc++.h>
#define ll long long int
using namespace std;
map<char,int>disit;
void mapDisit(){
    for(char i='0'; i<='9'; ++i){
        disit[i]=i-'0';
    }
    disit['A']=10;
    disit['B']=11;
    disit['C']=12;
    disit['D']=13;
    disit['E']=14;
    disit['F']=15;
}
ll based(string n,ll b){
    ll a=0;
    for(int i=0; i<n.size(); ++i){
        a=a*b+(disit[n[i]]);
    }
    return a;
}
string converted(ll num,ll b){
    string n="";
    while(num){
        ll a=num%b;
        if(a>9){
            n+=('A'+a%10);
        }
        else {
            n+=a+'0';
        }
        num/=b;
    }
    if(n.size()==0)
        n="0";
    reverse(n.begin(),n.end());
    return n;
}

int main()
{
    mapDisit();
    string num,to,from;
    while(cin >> num >> from >> to){
        ll numA,toA,fromA;
        if(to.size()==1)
            toA=to[0]-'0';
        else {
            toA=(to[0]-'0')*10+to[1]-'0';
        }
        if(from.size()==1)
            fromA=from[0]-'0';
        else {
            fromA=(from[0]-'0')*10+from[1]-'0';
        }
        numA=based(num,fromA);
        string number=converted(numA,toA);
        if(number.size()>7){
            cout << setw(7) << right << "ERROR" << endl;
        }
        else {
            cout << setw(7) << right << number << endl;
        }
    }
    return 0;
}

