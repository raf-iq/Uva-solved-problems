#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int T,test=1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int mile=0,juice=0;
        for(int i=0; i<n; ++i){
            int nn;
            cin >> nn;
            mile+=(nn/30+1);
            juice+=(nn/60+1);
        }
        mile*=10;
        juice*=15;
        cout << "Case " << test++ << ": ";
        if(mile < juice){
            cout << "Mile " <<  mile << endl;
        }
        else if(mile > juice){
            cout << "Juice " << juice << endl;
        }
        else
            cout << "Mile Juice " << mile << endl;
    }
    return 0;
}

