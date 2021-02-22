#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int T,n;
    cin >> T;
    while(T--){
        cin >> n;
        int a[10];
        for(int i=0; i<10; ++i){
            a[i]=0;
        }
        while(n){
            int nn=n;
            while(nn){
                a[nn%10]++;
                nn/=10;
            }
            n--;
        }
        for(int i=0; i<9; ++i)
            cout << a[i] << " ";
        cout << a[9] << endl;
    }

    return 0;
}

