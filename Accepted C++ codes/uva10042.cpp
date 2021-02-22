#include<bits/stdc++.h>
#define ll long long int
#define Bt 10000010
using namespace std;
vector<ll>primes;
bitset<Bt>bit;
void bitSeive(){
    bit.set();
    bit[0]=bit[1]=0;
    for(ll i=2; i<(Bt); i++){
        if(bit[i]){
            primes.push_back(i);
            for(ll j=i*i; j<Bt; j+=i)
                bit[j]=0;
        }
    }
}
ll _find_d_sum(ll n){
    ll N=0;
    while(n){
        N+=n%10;
        n/=10;
    }
    return N;
}
bool isprime(ll N){
    if(N<Bt-1) return bit[N];
    else {
        for (int i = 0; i < (int)primes.size(); i++)
        if (N % primes[i] == 0)
            return false;
    }
    return true;
}
bool isSmithNumber(ll N,ll d_sum){
    ll index=0, pf=primes[index],p_sum=0;
    while(pf*pf<=N){
        while(N%pf==0){
            N/=pf;
            ll n=pf;
            while(n){
                p_sum+=n%10;
                n/=10;
            }
            if(p_sum>d_sum)
                return false;
        }
        pf=primes[++index];
    }
    if(N!=1){
        while(N){
            p_sum+=N%10;
            N/=10;
        }
    }
    if(p_sum==d_sum)
            return true;
    return false;
}
int main()
{
    bitSeive();
    ll T,n;
    cin >> T;
    while(T--){
        cin >> n;
        while(true){
            ll N=++n;
            ll d_sum=_find_d_sum(N);
            if(!isprime(N) && isSmithNumber(N,d_sum)){
                cout << N << endl;
                break;
            }
        }
    }
    return 0;
}
