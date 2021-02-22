
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool _haveRoom(int a[],int w,int n){
    for(int i=0; i<w; ++i){
        if(a[i]>=n){
            return true;
        }
    }
    return false;
}
int main()
{
    int n,b,h,w;
    while(cin >> n >> b >> h >> w){
        int price=INT_MAX;
        int p,r[w];
        for(int i=0; i<h; ++i){
            cin >> p;
            for(int j=0; j<w; ++j){
                cin >> r[j];
            }
            if(_haveRoom(r,w,n)){
                price=min(price,p*n);
            }
        }
        if(price==INT_MAX || price > b)
            cout << "stay home\n";
        else
            cout << price << endl;

    }
    return 0;
}
