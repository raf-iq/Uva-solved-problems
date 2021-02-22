#include<bits/stdc++.h>
#define ll long long int
using namespace std;
map<string,char>mos;
void mosCode(){
    mos[".-"]='A';
    mos["-..."]='B';
    mos["-.-."]='C';
    mos["-.."]='D';
    mos["."]='E';
    mos["..-."]='F';
    mos["--."]='G';
    mos["...."]='H';
    mos[".."]='I';
    mos[".---"]='J';
    mos["-.-"]='K';
    mos[".-.."]='L';
    mos["--"]='M';
    mos["-."]='N';
    mos["---"]='O';
    mos[".--."]='P';
    mos["--.-"]='Q';
    mos[".-."]='R';
    mos["..."]='S';
    mos["-"]='T';
    mos["..-"]='U';
    mos["...-"]='V';
    mos[".--"]='W';
    mos["-..-"]='X';
    mos["-.--"]='Y';
    mos["--.."]='Z';
    mos["-----"]='0';
    mos[".----"]='1';
    mos["..---"]='2';
    mos["...--"]='3';
    mos["....-"]='4';
    mos["....."]='5';
    mos["-...."]='6';
    mos["--..."]='7';
    mos["---.."]='8';
    mos["----."]='9';
    mos[".-.-.-"]='.';
    mos["--..--"]=',';
    mos["..--.."]='\?';
    mos[".----."]='\'';
    mos["-.-.--"]='!';
    mos["-..-."]='/';
    mos["-.--."]='(';
    mos["-.--.-"]=')';
    mos[".-..."]='&';
    mos["---..."]=':';
    mos["-.-.-."]=';';
    mos["-...-"]='=';
    mos[".-.-."]='+';
    mos["-....-"]='-';
    mos["..--.-"]='_';
    mos[".-..-."]='\"';
    mos[".--.-."]='@';
}
int main()
{
    mosCode();
    int T,msg=1;
    cin >> T;
    getchar();
    while(T--){
        string s,ss="";
        getline(cin,s);
        int l=s.size();
        for(int i=s.size()-1; i>=0; --i){
            if(s[i]!=' '){
                l=i;
                break;
            }
        }
        cout << "Message #" << msg++ << endl;
        for(int i=0; i<=l; ++i){
            if(s[i]==' '){
                cout << mos[ss];
                ss="";
                if(s[i+1]==' '){
                    cout << " ";
                    i++;
                }
            }
            else {
                ss+=s[i];
            }
        }
        cout << mos[ss] << endl;
        if(T){
            cout << endl;
        }
    }
    return 0;
}

