#include<bits/stdc++.h>
#define ll long long int
#define N 20000001
using namespace std;
bitset<N>bit;
vector<ll> primes,t_p1,t_p2;
void seive(){
    bit.set();
    bit[0]=bit[1]=bit[2]=0;
    for(ll i=3; i<=N; i+=2){
        if(bit[i]){
            primes.push_back(i);
            for(ll j=i*2; j<N; j+=i){
                bit[j]=0;
            }
        }
    }
}
void twinPrimes(){
    for(ll i=0; i<primes.size()-1; ++i){
        if(primes[i+1]-primes[i]==2){
            t_p1.push_back(primes[i]);
            t_p2.push_back(primes[i+1]);
        }
        if(t_p1.size()==100000)
            break;
    }
}
int main()
{
    seive();
    twinPrimes();
    int n;
    while(cin >> n){
        cout << "(" << t_p1[n-1] << ", " << t_p2[n-1] << ")" << endl;
    }
    return 0;
}

