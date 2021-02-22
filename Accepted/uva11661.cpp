#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        if(n==0)
            break;
        bool paichi=false;
        char c;
        int mini=INT_MAX,D=-1,R=-1;
        for(int i=0; i<n; ++i){
            cin >> c;
            if(c=='Z')
                paichi=true;
            else if(c=='R'){
                R=i;
            }
            else if(c=='D')
                D=i;
            if(D!=-1 && R!=-1)
                mini=min(mini,abs(D-R));
        }
        if(paichi)
            cout << "0\n";
        else
            cout << mini << endl;
    }
    return 0;
}

