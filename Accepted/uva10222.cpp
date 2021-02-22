#include<bits/stdc++.h>
#define ll long long int
using namespace std;
string madKey="qwertyuiop[]\\asdfghjkl;'zxcvbnm,.?";
int mad(char ss){
    char c=tolower(ss);
    for(int i=0; i<madKey.size(); ++i){
        if(c==madKey[i])
            return i;
    }
}
int main()
{
    string s;
    bool space=false;
    while(cin >> s){
        if(space)
            cout << " ";
        space=true;
        for(int i=0; i<s.size(); ++i){
            cout << madKey[mad(s[i])-2];
        }
    }
    cout << endl;
    return 0;
}
