#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int bigMod(ll x,ll y,ll n){
    if(y==0)
        return 1;
    if(y%2==0){
        int result=bigMod(x,y/2,n);
        return ((result%n)*(result%n))%n;
    }
    else
        return ((x%n)*bigMod(x,y-1,n))%n;
}
int main()
{
    int T;
    cin >> T;
    while(T--){
        int x,y,n;
        cin >> x >> y >> n;
        cout << bigMod(x,y,n)%n << endl;
        if(T==0)
            cin >> n;
    }
    return 0;
}

