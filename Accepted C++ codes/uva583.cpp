
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll seive_size=10000002;
bitset<10000010> bs;
vector<int>prime;
void seive(){
    bs.set();
    for(ll i=2; i<=seive_size; ++i){
        if(bs[i]){
            for(ll j=i*i; j<=seive_size; j+=i){
                bs[j]=0;
            }
        }
        prime.push_back(i);
    }
}
int main()
{
    seive();
    int n;
    while(cin >> n){
            if(n==0) break;
        vector<int> factor;
        int N=n;
        if(n<0){
            n*=-1;
            factor.push_back(-1);
            ll id=0,pf=prime[id++];
            while(pf*pf<=n){
                while(n%pf==0){
                    n/=pf;
                    factor.push_back(pf);
                }
                pf=prime[id++];
            }
            if(n!=1) factor.push_back(n);
            cout << N << " = ";
            for(ll i=0; i<factor.size()-1; i++){
                cout << factor[i] << " x " ;
            }
            cout << factor[factor.size()-1] << endl;
        }
        else {
            ll id=0,pf=prime[id++];
            while(pf*pf<=n){
                while(n%pf==0){
                    n/=pf;
                    factor.push_back(pf);
                }
                pf=prime[id++];
            }
            if(n!=1) factor.push_back(n);
            cout << N << " = ";
            for(ll i=0; i<factor.size()-1; i++){
                cout << factor[i] << " x " ;
            }
            cout << factor[factor.size()-1] << endl;
        }
    }

    return 0;
}
