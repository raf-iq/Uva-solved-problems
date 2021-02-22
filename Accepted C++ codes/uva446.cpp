#include<bits/stdc++.h>
#define ll long long int
using namespace std;
map<char,string>htob;
map<char,int>htoD;
void hTob(){
    htob['0']="0000";
    htob['1']="0001";
    htob['2']="0010";
    htob['3']="0011";
    htob['4']="0100";
    htob['5']="0101";
    htob['6']="0110";
    htob['7']="0111";
    htob['8']="1000";
    htob['9']="1001";
    htob['A']="1010";
    htob['B']="1011";
    htob['C']="1100";
    htob['D']="1101";
    htob['E']="1110";
    htob['F']="1111";
    for(int i=0; i<10; ++i){
        htoD[i+'0']=i;
    }
    htoD['A']=10;
    htoD['B']=11;
    htoD['C']=12;
    htoD['D']=13;
    htoD['E']=14;
    htoD['F']=15;

}
int toDecimal(string n){
    int a=0;
    for(int i=0; i<n.size(); ++i){
        a=a*16+htoD[n[i]];
    }
    return a;
}
int main()
{
    hTob();
    int T;
    cin >> T;
    while(T--){
        string n1,n2,op;
        cin >> n1 >> op >> n2;
        if(n1.size()==1){
            n1="00"+n1;
        }
        else if(n1.size()==2){
            n1="0"+n1;
        }
        if(n2.size()==1){
            n2="00"+n2;
        }
        else if(n2.size()==2){
            n2="0"+n2;
        }
        int d1=toDecimal(n1);
        int d2=toDecimal(n2);
        cout << "0";
        for(int i=0; i<n1.size(); ++i){
            cout << htob[n1[i]];
        }
        cout << " " << op << " 0";
        for(int i=0; i<n2.size(); ++i){
            cout << htob[n2[i]];
        }
        cout << " = " ;
        if(op=="+")
            cout << d1+d2 << endl;
        else if(op=="-")
            cout << d1-d2 << endl;
    }
    return 0;
}

