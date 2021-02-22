#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,test=1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; ++i){
            cin >> a[i];
        }
        cout << "Case " << test++ << ": " << a[n/2] << endl;
    }
    return 0;
}

