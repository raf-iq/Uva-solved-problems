#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n,m;
    while(cin >> n >> m){
        if(n==0 && m==0 )
            break;
        map<int,int>cd;
        for(int i=0; i<n+m; ++i){
            int ip;
            cin >> ip;
            cd[ip]++;
        }
        int cdCounter=0;
        for(map<int,int>::iterator it=cd.begin(); it!=cd.end();++it){
            if(it->second==2)
                    cdCounter++;
        }
        cout << cdCounter << endl;
    }
    return 0;
}
