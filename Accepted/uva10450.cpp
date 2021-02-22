
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll dp[57];
ll fib(ll n){
    if(n==0|| n==1)
        return n;
    if(dp[n] != -1)
        return dp[n];
    dp[n]=fib(n-1)+fib(n-2);
    return dp[n];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    fib(54);
    int T,n,test=1;
    cin >> T;
    while(T--){
        cin >> n;
        cout << "Scenario #" << test++ << ":\n";
        if(n==0)
            cout << "0\n\n";
        else
            cout << dp[n+2] << "\n\n";
    }
    return 0;
}
