#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int T,test=1;
    cin >> T;
    while(T--){
        int k;
        cin >> k;
        int a,b,c,d,f=0;
        set<int> s;
        for(int i=2; i*i<=k; ++i){
            if(k%i==0){
                 if(f==0){
                    a=i;
                    b=k/i;
                    f=1;
                    s.insert(a);
                    s.insert(b);
                }
                else {
                    c=i;
                    d=k/i;
                    s.insert(c);
                    s.insert(d);
                    if(s.size()==4)
                        break;
                }
            }
        }
        cout << "Case #" << test++ << ": " << k << " = " << a << " * " << b << " = " << c << " * " << d <<endl;
    }
    return 0;
}

