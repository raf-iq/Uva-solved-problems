#include<bits/stdc++.h>
#define angle 4*acos(0.0)
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--){
        int sides[4];
        for(int i=0; i<4; ++i)
            cin >> sides[i];
        sort(sides,sides+4);

        if(sides[0]==sides[2] && sides[1]==sides[3])
            cout << "square" << endl;
        else if(sides[0]==sides[1] && sides[2]==sides[3])
            cout << "rectangle" << endl;
        else if(sides[0]+sides[1]+sides[2] > sides[3])
            cout << "quadrangle" << endl;
        else
            cout << "banana" << endl;
    }
    return 0;
}

