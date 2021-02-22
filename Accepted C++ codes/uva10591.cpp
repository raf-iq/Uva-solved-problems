#include<bits/stdc++.h>
using namespace std;
bool hp[1000];
bool happyNumber(int N,int n){
    if(n==1)
        return true;
    if(hp[n] || n==N)
        return false;
    hp[n]=true;
    int sum=0;
    while(n){
        int a=n%10;
        sum+=a*a;
        n/=10;
    }
    return happyNumber(N,sum);
}
int main()
{
    int T,test=1;
    cin >> T;
    while(T--){
        int n,N;
        memset(hp,false,sizeof(hp));
        cin >> n;
        int sum=0;
        N=n;
        while(n){
            int a=n%10;
            sum+=a*a;
            n/=10;
        }
        cout << "Case #" << test++ << ": ";
        if(happyNumber(N,sum)){
            cout << N << " is a Happy number.\n";
        }
        else {
            cout << N << " is an Unhappy number.\n";
        }
    }
    return 0;
}
