#include<bits/stdc++.h>
#define ll long long int
using namespace std;
class ASCII {
public :
    int Char,Int;
    ASCII(){ Char=Int=0;}
};
bool comp(ASCII a,ASCII b){
    if(a.Int==b.Int){
        return a.Char>b.Char;
    }
    return a.Int<b.Int;
}
int main()
{
    string s;
    bool line=false;
    while(getline(cin,s)){
        if(line){
            cout << endl;
        }
        line=true;
        ASCII ascii[256];
        for(int i=0; i<s.size(); ++i){
            int a=(int)s[i];
            ascii[a].Char=a;
            ascii[a].Int=ascii[a].Int+1;
        }
        sort(ascii,ascii+256,comp);
        for(int i=0;i<256; ++i){
            if(ascii[i].Char!=0){
                cout << ascii[i].Char << " " << ascii[i].Int << endl;
            }
        }
    }
    return 0;
}

