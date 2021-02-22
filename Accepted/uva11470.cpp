#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int test=1,n;
    while(cin >> n){
        if(n==0)
            break;
        int sqSum[n][n];
        vector<int> v;
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                cin >> sqSum[i][j];
            }
        }
        int nn=n/2;
        if(n%2)
            nn++;
        for(int k=0; k<nn; ++k){
            int sum=0;
            for(int i=k; i<n-k; ++i){
                for(int j=k; j<n-k; ++j){
                    sum+=sqSum[i][j];
                }
            }
            v.push_back(sum);
        }
        cout << "Case " << test++ << ": ";
        for(int i=0; i<v.size()-1; ++i){
            cout << v[i]-v[i+1] << " ";
        }
        cout << v[v.size()-1] << endl;
    }
    return 0;
}

