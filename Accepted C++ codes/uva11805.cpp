#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int T,n,k,p,test=1;
    cin >> T;
    while(T--){
        cin >> n >> k >> p;
        cout << "Case " << test << ": ";
        ++test;
        if(k+p<=n){
            cout << k+p << endl;
        }
        else{
            int bafana=p%n;
            if(bafana+k<=n){
                cout << k+bafana << endl;
            }
            else {
                cout << (k+bafana)%n<< endl;
            }
        }
    }
    return 0;
}

