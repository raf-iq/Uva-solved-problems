#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void makeEqualLenght(string &s,int n){
    int ln=n-s.size();
    for(int i=0; i<ln; ++i)
        s+=" ";
}
int main()
{
    string line[103];
    int k=0, ml=0;
    while(getline(cin,line[k])){
        ml=max(ml,(int)line[k].size());
        k++;
    }
    for(int i=0; i<k; ++i){
        makeEqualLenght(line[i],ml);
    }
    for(int i=0; i<ml; ++i){
        for(int j=k-1; j>=0; --j){
            cout << line[j][i];
        }
        cout << endl;
    }

    return 0;
}

