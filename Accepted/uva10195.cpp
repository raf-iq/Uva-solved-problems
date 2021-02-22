#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f
#define PI 2*acos(0.0)
int main()
{
    double a,b,c;
    while(cin >> a >> b >> c){
        double s=(a+b+c)/2;
        double areaT=sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "The radius of the round table is: ";
        if((a+b+c)==0)
            printf("%.3f\n",0);
        else
            printf("%.3f\n",(areaT*2)/(a+b+c));
    }
    return 0;
}

