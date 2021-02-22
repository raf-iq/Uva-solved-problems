#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int N=1000010;
vector<int> prime;
vector<bool>isPrime(N,true);
void seive(){
    isPrime[0]=isPrime[1]=false;
    for(int i=2; i<N; ++i){
        if(isPrime[i]){
            prime.push_back(i);
            for(int j=i*2; j<N; j+=i)
                isPrime[j]=false;
        }
    }
}
int countDefferentPrimeFactor(int n){
    int countPrime=0;
    int cp=0,pf=prime[cp];
    bool factor=false;
    while(pf*pf<=n){
        while(n%pf==0){
            n/=pf;
            factor=true;
        }
        if(factor)
            countPrime++;
        pf=prime[++cp];
        factor=false;
    }
    if(n!=1)
        countPrime++;
    return countPrime;
}
int main()
{
    seive();
    int pr;
    while(cin >> pr){
        if(pr==0)
            break;
        if(pr==1)
            cout << pr << " : 0\n";
        else if(isPrime[pr])
            cout << pr << " : 1\n";
        else {
            cout << pr << " : " << countDefferentPrimeFactor(pr) << endl;
        }
    }
    return 0;
}

