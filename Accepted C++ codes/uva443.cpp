#include<bits/stdc++.h>
#define ll long long int
#define N 5845
using namespace std;
ll humbleNumber[N];
void genHumbNumber(){
    set<ll>s;
    s.insert(1);
    for(int i=1; i<=5843; ++i){
        ll n=*s.begin();
        s.erase(*s.begin());
        s.insert(n*2);
        s.insert(n*3);
        s.insert(n*5);
        s.insert(n*7);
        humbleNumber[i]=n;
    }
}
int main()
{
    memset(humbleNumber,0,sizeof(humbleNumber));
    genHumbNumber();
    int n;
    while(cin >> n){
        if(n==0)
            break;
        int nn=n;
        int l=nn%10;
        nn/=10;
        int L=nn%10;
        if(l==1 && L != 1)
            cout << "The " << n << "st humble number is " << humbleNumber[n] << ".\n";
        else if(l==2 && L != 1)
            cout << "The " << n << "nd humble number is " << humbleNumber[n] << ".\n";
        else if(l==3 && L != 1)
            cout << "The " << n << "rd humble number is " << humbleNumber[n] << ".\n";
        else
            cout << "The " << n << "th humble number is " << humbleNumber[n] << ".\n";
    }
    return 0;
}

