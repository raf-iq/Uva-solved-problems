#include<bits/stdc++.h>
#define epsilon 1e-6
using namespace std;
int main()
{
    int n;
    while(cin >> n){
        if(n==0)
            break;
        int trip[n],a,b;
        int avg=0;
        for(int i=0; i<n; ++i){
            cin >> a;
            getchar();
            cin >> b;
            trip[i]=(a*100)+b;
            avg+=trip[i];
        }
        int down=avg/n;
        int up=down+((avg%n)?1:0);
        int pos=0,neg=0;
        for(int i=0; i<n; ++i){
            if(trip[i]>up){
                pos+=(trip[i]-up);
            }
            else if(trip[i]<down) {
                neg+=(down-trip[i]);
            }
        }
        int ans=max(pos,neg);
        cout << "$" << ans/100 << "." << setw(2) << setfill('0') << ans%100 << endl;
    }
    return 0;
}

