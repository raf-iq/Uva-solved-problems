#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll>fib_num;
vector<ll>comul_fib_num;
void generate_fib_num(){
    fib_num.push_back(1);
    fib_num.push_back(1);
    for(int i=2; ; ++i){
        ll a=fib_num[i-2]+fib_num[i-1];
        if(a>INT_MAX)
            break;
        fib_num.push_back(a);
    }
}
void comulation_fib_num(){
    comul_fib_num.push_back(0);
    for(int i=1; i<fib_num.size(); ++i){
        comul_fib_num.push_back(comul_fib_num[i-1]+fib_num[i]);
    }
}

int main()
{
    generate_fib_num();
    comulation_fib_num();
    int N;
    while(cin >> N){
        if(N<0)
            break;
        if(N==0)
            cout << "0 1\n";
        else
            cout << comul_fib_num[N-1]+1 << " " << comul_fib_num[N]+1 << endl;
    }
    return 0;
}

