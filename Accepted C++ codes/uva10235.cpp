#include<bits/stdc++.h>
#define ll long long int
#define Max 1000007
using namespace std;
bool prime[Max];
void seive(){
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(int i=2; i<=sqrt(Max); ++i){
        if(prime[i]){
            for(int j=i*2; j<=Max;j+=i){
                prime[j]=false;
            }
        }
    }
}
int is_emirp(string s){
    int n=0;
    for(int i=0; i<s.size(); ++i)
    {
        n=n*10+s[i]-'0';
    }
    return n;
}
int main()
{
    seive();
    int n;
    while(cin >> n){
        if(!prime[n]){
            cout << n << " is not prime.\n";
        }
        else{
            int nn=n;
            string s="";
            while(nn){
                s+=(nn%10+'0');
                nn/=10;
            }
            int p=is_emirp(s);
            if(prime[p] && n!=p)
                cout << n << " is emirp.\n";
            else
                cout << n << " is prime.\n";
        }
    }
    return 0;
}

