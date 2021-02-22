#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        if(n==0)
            break;
        int top=1,north=2,west=3,east=4,south=5,bottom=6;
        string moveDies;
        for(int i=0; i<n; ++i){
            cin >> moveDies;
            if(moveDies=="north"){
                int temp=north;
                north=top;
                top=south;
                south=bottom;
                bottom=temp;
            }
            else if(moveDies=="south"){
                int temp=south;
                south=top;
                top=north;
                north=bottom;
                bottom=temp;
            }
            else if(moveDies=="west"){
                int temp=bottom;
                bottom=west;
                west=top;
                top=east;
                east=temp;
            }
            else if(moveDies=="east"){
                int temp=bottom;
                bottom=east;
                east=top;
                top=west;
                west=temp;
            }
        }
        cout << top << endl;
    }
    return 0;
}

