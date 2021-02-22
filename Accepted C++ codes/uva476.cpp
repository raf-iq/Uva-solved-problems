#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    double pp[12][5],x,y;
    char r;
    int i=0;
    while(true){
        cin >> r;
        if(r=='*')
            break;
        cin >> pp[i][0] >> pp[i][1] >> pp[i][2] >> pp[i][3];
        i++;
    }
    int point=0;
    while(true){
        cin >> x >> y;
        if(x==9999.9 && y==9999.9)
            break;
        point++;
        bool paichi=false;
        for(int j=0; j<i; ++j){
            if(pp[j][0]<x && pp[j][2]>x && pp[j][1]>y && pp[j][3]<y){
                cout << "Point " << point << " is contained in figure " << j+1 << endl;
                paichi=true;
            }
        }
        if(!paichi)
            cout << "Point " << point << " is not contained in any figure\n";
    }

    return 0;
}

