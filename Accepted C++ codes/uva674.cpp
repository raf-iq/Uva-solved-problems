
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int changes[]={1,5,10,25,50};
int dp[10003][5];
int coin(int n,int idx){
    if(n==0){
        return 1;
    }
    if(dp[n][idx]!=-1){
        return dp[n][idx];
    }
    int cnt=0;
    for(int i=idx; i<5; ++i){
        if(n >=changes[i])
            cnt+=coin(n-changes[i],i);
    }
    return dp[n][idx]=cnt;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    while(cin >> n){
        cout << coin(n,0) << endl;
    }
    return 0;
}
