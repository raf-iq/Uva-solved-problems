#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n,d,r;
    while(cin >> n >> d >> r){
        if(n==0 && d==0 && r==0)
            break;
        int morning[n],evening[n];
        for(int i=0; i<n; ++i)
            cin >> morning[i];
        for(int i=0; i<n; ++i)
            cin >> evening[i];
        sort(morning,morning+n);
        sort(evening,evening+n,greater<int>());
        int minimizedCost=0;
        for(int i=0; i<n; ++i){
            int a=morning[i]+evening[i];
            if(a>d){
                minimizedCost+=(a-d)*r;
            }
        }
        cout << minimizedCost << endl;
    }
    return 0;
}

