#include<bits/stdc++.h>
#define ll long long int

using namespace std;
ll __find_max_product_of_all_subArray(ll a[],int n){
    vector<ll>s;
    for(int i=0; i<n; ++i){
        for(int j=i; j<n; ++j){
            ll product=1;
            for(int k=i; k<=j; ++k)
                product*=a[k];
            s.push_back(product);
        }
    }
    sort(s.begin(),s.end(),greater<ll>());
    return s[0];
}
int main()
{
    int test=1,n;
    while(cin >> n){
        ll a[n];
        for(int i=0; i<n; ++i)
            cin >> a[i];
        ll ans=__find_max_product_of_all_subArray(a,n);
        if(ans<0)
            cout << "Case #" << test++ << ": The maximum product is 0.\n" <<  endl;
        else
            cout << "Case #" << test++ << ": The maximum product is " << ans << ".\n" <<  endl;
    }
    return 0;
}

