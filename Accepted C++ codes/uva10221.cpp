#include<bits/stdc++.h>
#define ll long long int
#define Pi acos(-1.0)
using namespace std;
int main()
{
    long double earthRadius=6440;
    long double distance,angle;
    string type;
    while(cin >> distance >> angle >> type){
        distance+=earthRadius;
        if(angle>180)
            angle=360-angle;
        if(type=="deg"){
            angle=(Pi*angle)/180.0;
            cout << setprecision(6) << fixed << showpoint << (angle*distance) << " ";
        }
        else if(type=="min"){
            angle=(Pi*angle)/(180*60);
            cout << setprecision(6) << fixed << showpoint << (distance*angle) <<" ";
        }
        cout << setprecision(6) << fixed << showpoint << 2*distance*sin(angle/2.0) << endl;
    }
    return 0;
}
