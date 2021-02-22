#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int test=1;
    string lag;
    while(cin >> lag){
        if(lag=="#")
            break;
        cout << "Case " << test++ << ": ";
        if(lag=="HELLO")
            cout << "ENGLISH\n";
        else if(lag=="HOLA")
            cout << "SPANISH\n";
        else if(lag=="HALLO")
            cout << "GERMAN\n";
        else if(lag=="BONJOUR")
            cout << "FRENCH\n";
        else if(lag=="CIAO")
            cout << "ITALIAN\n";
        else if(lag=="ZDRAVSTVUJTE")
            cout << "RUSSIAN\n";
        else
            cout << "UNKNOWN\n";
    }
    return 0;
}

