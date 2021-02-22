#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int sToNum(string s){
    int num=0;
    for(int i=0; i<s.size(); ++i){
        num=num*10+(s[i]-'0');
    }
    return num;
}
int main()
{
    int T;
    cin >> T;
    getchar();
    while(T--){
        getchar();
        vector<int>number;
        map<int,string>mp;
        map<int,string>::iterator it;
        char ch=' ';
        string s="";
        while((ch=getchar())!='\n'){
            if(ch!=' ')
                s+=ch;
            else {
                number.push_back(sToNum(s));
                s="";
            }
        }
        number.push_back(sToNum(s));
        s="";
        ch=' ';
        int i=0;
        while((ch=getchar())!='\n'){
            if(ch!=' ')
                s+=ch;
            else {
                mp[number[i]-1]=s;
                i++;
                s="";
            }
        }
        mp[number[i]-1]=s;
        for(it=mp.begin(); it!=mp.end(); ++it){
            cout << it->second << endl;
        }
        if(T)
            cout << endl;
    }
    return 0;
}

