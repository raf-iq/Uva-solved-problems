#include<bits/stdc++.h>
#define angle 4*acos(0.0)
using namespace std;
int main()
{
    double radius,number;
    while(cin >> radius >> number){
        cout << setprecision(3) << fixed << showpoint ;
        cout << number*0.5*radius*radius*sin(angle/number) << endl;
    }
    return 0;
}

