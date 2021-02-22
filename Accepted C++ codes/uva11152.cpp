#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f
#define PI 2*acos(0.0)
int main()
{
    double a,b,c;
    while(cin >> a >> b >> c){
        double s=(a+b+c)/2;
        double areaOfTringle=sqrt(s*(s-a)*(s-b)*(s-c));
        double r = (areaOfTringle*2)/(a+b+c);
        double R = (a*b*c)/sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c));
        double areaOfInnerCircle=PI*r*r;
        double areaOfCurcumcircle=PI*R*R;
        cout << setprecision(4) << fixed << showpoint ;
        cout << areaOfCurcumcircle-areaOfTringle << " ";
        cout << areaOfTringle-areaOfInnerCircle << " " ;
        cout << areaOfInnerCircle << endl;
    }
    return 0;
}

