
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    while(getline(cin,line)){
        int l=0;
        map<char,int> mpup,mplow;
        for(int i=0; i<line.size(); ++i){
            if(line[i] >= 'A' && line[i] <='Z'){
                mpup[line[i]]++;
                l=max(mpup[line[i]],l);
            }
            else if(line[i] >='a' && line[i] <='z'){
                mplow[line[i]]++;
                l=max(mplow[line[i]],l);
            }
        }
        map<char,int> :: iterator it;
        for(it=mpup.begin(); it!=mpup.end(); ++it){
            if(it->second == l)
                cout << it->first;
        }
        for(it=mplow.begin(); it!=mplow.end(); ++it){
            if(it->second == l)
                cout << it->first;
        }
        cout << " " << l << endl;
    }
    return 0;
}
