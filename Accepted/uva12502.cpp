#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    double x,y,z;
    cin >> T;
    while(T--){
        cin >> x >> y >> z;
        double ans=(z*x)/(x+y);
        ans+=(z*(x-y))/(x+y);
        cout << (int)ans << endl;
    }
    return 0;
}

