#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int __closestSum(int aset[],int n,int q){
    int ourAns,closeTo=INT_MAX;
    for(int i=0; i<n-1; ++i){
        for(int I=i+1; I<n; ++I){
            int temp=aset[i]+aset[I];
            if(abs(temp-q)<closeTo){
                ourAns=temp;
                closeTo=abs(temp-q);
            }
        }
    }
    return ourAns;
}
int main()
{
    int n,m,q,test=1;
    while(cin >> n){
        if(n==0)
            break;
        int aset[n];
        for(int i=0;i<n; ++i)
            cin >> aset[i];
        cin >> m;
        cout << "Case " << test++ << ":\n";
        for(int i=0; i<m; ++i){
            cin >> q;
            cout << "Closest sum to " << q << " is " << __closestSum(aset,n,q) << "." << endl;
        }
    }
    return 0;
}

