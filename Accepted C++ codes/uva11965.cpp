#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int T,n,test=1;
    bool line=false;
    cin >> T;
    while(T--){
        cin >> n;
        if(line){
            cout << endl;
        }
        line=true;
        getchar();
        cout << "Case " << test << ":\n";
        test++;
        string s;
        for(int i=0; i<n; ++i){
            getline(cin,s);
            s+="#";
            int len=s.size()-1;
            for(int i=0; i<len; ++i){
                if(s[i]!=' ' || s[i+1]!=' ')
                    cout << s[i];
            }
            cout <<endl;

        }
    }
    return 0;
}

