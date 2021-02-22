#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int T;
    cin >> T;
    getchar();
    while(T--){
        string cypher;
        getline(cin,cypher);
        int n=cypher.size();
        int sq=sqrt(n);
        if(sq*sq!=n){
            cout << "INVALID\n";
        }
        else {
            for(int i=0; i<sq; ++i){
                cout  << cypher[i];
                for(int k=1; k<sq; k++){
                    cout << cypher[k*sq+i];
                }
            }
            cout << endl;
        }
    }
    return 0;
}

