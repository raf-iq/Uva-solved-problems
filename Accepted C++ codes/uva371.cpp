#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll _ackermann_(ll n){
    int _ack=0;
    while(1){
        if(n%2==0){
            n/=2;
        }
        else {
            n=3*n+1;
        }
        _ack++;
        if(n==1)
            break;
    }
    return _ack;
}
int main()
{
    ll a,b;
    while(cin >> a >> b){
        if(a==0 && b==0)
            break;
        ll max_ack,ack_man=0;
        if(a>b)
            swap(a,b);
        for(ll i=a; i<=b; ++i){
            ll ack=_ackermann_(i);
            if(ack > ack_man){
                ack_man=ack;
                max_ack=i;
            }
        }
        cout << "Between " << a << " and " << b << ", " ;
        cout << max_ack << " generates the longest sequence of " << ack_man <<  " values.\n";
    }
    return 0;
}

