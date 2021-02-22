#include<bits/stdc++.h>
#define ll long long int
#define pi 2*acos(0.0)
using namespace std;

int main()
{
    int n,test=1;
    double A;
    while(cin >> n >> A){
        if(n<3)
            break;
        cout << "Case " << test++ << ": ";
        double angle=(2*pi)/n;
        double a=(2*(A/n))/sin(angle);
        cout << setprecision(5) << fixed << showpoint ;
        cout << (pi*a)-A << " ";
        double b=2*sqrt(a)*sin(angle/2);
        cout << (A-pi*(a-(b*b)/4)) << endl;
    }
    return 0;
}

