#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll dp[55];
ll fib(ll n){
    if(n==1|| n==2)
        return n;
    if(dp[n] != -1)
        return dp[n];
    dp[n]=fib(n-1)+fib(n-2);
    return dp[n];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    ll n;
    while(cin >> n){
        if(n==0) break;
        cout << fib(n) <<endl;
    }
    return 0;
}
