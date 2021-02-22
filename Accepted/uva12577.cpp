#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test=1;
    string s;
    while(cin >> s){
        if(s=="*") break;
        cout << "Case " << test++ << ": ";
        if(s=="Hajj")
            cout << "Hajj-e-Akbar" << endl;
        else if(s=="Umrah")
            cout << "Hajj-e-Asghar" << endl;
    }
    return 0;
}
