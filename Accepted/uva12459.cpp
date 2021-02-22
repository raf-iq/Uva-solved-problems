#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll fibNum[81];
void generateFibNum(){
    fibNum[0]=1;
    fibNum[1]=1;
    for(int i=2; i<81; ++i){
        fibNum[i]=fibNum[i-1]+fibNum[i-2];
    }
}
int main()
{
    generateFibNum();
    int n;
    while(cin >> n){
        if(n==0)
            break;
        cout << fibNum[n] << endl;
    }
    return 0;
}

