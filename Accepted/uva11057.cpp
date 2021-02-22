#include<bits/stdc++.h>
using namespace std;
bool b_search(int a[],int bg,int ed,int item){
    while(bg<=ed){
        int m=(bg+ed)/2;
        if(a[m]==item)
            return true;
        else if(a[m]<item)
            bg=m+1;
        else
            ed=m-1;
    }
    return false;
}
int main ()
{
    int n;
    while(cin >> n){
        int a[n];
        for(int i=0; i<n; ++i){
            cin >> a[i];
        }
        int m;
        cin >> m;
        sort(a,a+n);
        int I=0,J=0,mini=INT_MAX;
        for(int i=0; i<n-1; ++i){
            if(b_search(a,i+1,n,m-a[i])){
                int temp=m-a[i]-a[i];
                if(temp < mini){
                    I=a[i];
                    J=m-I;
                    mini=J-I;
                }
            }
        }
        cout << "Peter should buy books whose prices are " << I << " and " << J << ".\n\n";
    }
    return 0;
}

