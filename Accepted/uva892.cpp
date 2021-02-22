#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool only_alpha(char c){
    return ((c>='a' && c<='z') || (c>='A'&&c<='Z'));
}
int main()
{
    string s;
    string hyphen="";
    while(getline(cin,s)){
        if(s=="#")
            break;
        int n=s.size(),index=0;;
        if(hyphen.size()>0){
            for(int i=0; i<n; ++i){
                if(s[i]==' ')
                    break;
                else if(only_alpha(s[i])){
                    hyphen+=s[i];
                }
                index++;
            }
            cout << hyphen << endl;
            hyphen="";
        }
        if(s[n-1]=='-'){
            n--;
            for(int i=s.size()-2; i>=index; --i){
                if(s[i]==' '){

                    break;
                }
                else if(only_alpha(s[i])){
                    hyphen+=s[i];
                    n--;
                }
            }
            reverse(hyphen.begin(),hyphen.end());
        }
        for(int i=index; i<n; ++i){
            if(only_alpha(s[i])||s[i]==' ')
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}

