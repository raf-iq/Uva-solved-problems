#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> primes;
void seive(){
    const int N=100000;
    bitset<N>bit;
    bit.set();
    bit[0]=bit[1]=0;
    for(int i=2; i<=N; i+=2){
        bit[i]=0;
    }
    primes.push_back(2);
    for(int i=3; i<=N; i+=2){
        if(bit[i]){
            primes.push_back(i);
            for(int j=i; j<=N; j+=i*2){
                bit[j]=0;
            }
        }
    }
}
bool _find_pi(int n){
    int b=0,e=primes.size();
    while(b<=e){
        int m=(b+e)/2;
        if(primes[m]==n){
            return true;
        }
        else if(primes[m] > n){
            e=m-1;
        }
        else {
            b=m+1;
        }
    }
    return false;
}
int main()
{
    seive();
    int n;
    while(cin >> n){
        if(n==0)
            break;
        int c_p=0;
        int sq=n/2;
        for(int i=0; primes[i]<=sq; ++i){
            if(_find_pi(n-primes[i])){
                c_p++;
            }
        }
        cout << c_p << endl;
    }
    return 0;
}

