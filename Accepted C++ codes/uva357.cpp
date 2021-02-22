
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int changes[]={1,5,10,25,50};
ll dp[30003][5];
ll coin(ll n,int idx){
    if(n==0){
        return 1;
    }
    if(dp[n][idx]!=-1){
        return dp[n][idx];
    }
    ll cnt=0;
    for(int i=idx; i<5; ++i){
        if(n >=changes[i])
            cnt+=coin(n-changes[i],i);
    }
    return dp[n][idx]=cnt;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    ll amount;
    while(cin >> amount){
        ll ans=coin(amount,0);
        if(ans==1)
            cout << "There is only 1 way to produce "<< amount << " cents change.\n";
        else
            cout << "There are " << ans << " ways to produce " << amount << " cents change.\n";

    }
    return 0;
}
