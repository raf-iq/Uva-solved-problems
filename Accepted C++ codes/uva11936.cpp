#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int T,a,b,c;
    cin >> T;
    while(T--){
        cin >> a >> b >> c;
        if(a+b>c && b+c>a && c+a>b)
            cout << "OK\n";
        else
            cout << "Wrong!!\n";
    }
    return 0;
}


