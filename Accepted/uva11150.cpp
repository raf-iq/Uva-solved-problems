#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int cnt=n;
        while(n>=3){
            cnt+=n/3;
            n=n%3+n/3;
        }
        if(n==2) cnt++;
        cout << cnt << endl;
    }
    return 0;
}
