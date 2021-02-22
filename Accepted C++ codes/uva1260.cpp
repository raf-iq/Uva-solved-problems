#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int search_score(int a[],int b,int e,int preScore){
    int sum=0;
    for(int i=b; i<e; ++i){
        if(a[i]<=preScore)
            sum++;
    }
    return sum;
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; ++i){
            cin >> a[i];
        }
        int sales=0;
        for(int i=1; i<n; ++i){
            sales+=search_score(a,0,i,a[i]);
        }
        cout << sales << endl;
    }
    return 0;
}

