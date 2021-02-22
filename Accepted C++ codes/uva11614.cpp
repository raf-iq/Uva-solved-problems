#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,T;
    cin >> T;
    while(T--){
        cin >> n;
        ll sq=sqrt(8*n+1)-1;
        cout << sq/2 << endl;
    }
    return 0;
}

