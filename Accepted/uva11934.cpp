#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int a,b,c,d,l;
int f(int x){
    return (a*x*x+b*x+c)%d;
}
int main()
{
    while(cin >> a >> b >> c >> d >> l){
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;
        int div_func=0;
        for(int i=0; i<=l; ++i){
            if(f(i)==0)
                div_func++;
        }
        cout << div_func << endl;
    }
    return 0;
}

