#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int _find(int val[],int n, int w){
    int a[n+1][w+1];
    memset(a,0,sizeof(a));
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=w; ++j){
            if(val[i] > j)
                a[i][j]=a[i-1][j];
            else
                a[i][j]=max(a[i-1][j],a[i-1][j-val[i]]+val[i]);
        }
    }
    return a[n][w];
}
int main()
{
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int a[n+1],sum=0;
        a[0]=0;
        for(int i=0;i<n; ++i){
            cin >> a[i+1];
            sum+=a[i+1];
        }
        int cut=_find(a,n,sum/2);
        cout << sum-2*cut << endl;
    }
    return 0;
}

