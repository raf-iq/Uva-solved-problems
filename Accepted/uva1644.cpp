
#include<iostream>
bool is_prime(int);
using namespace std;
int main ()
{
    int n;
    while(cin >> n){
        if(n == 0)
            break;
        if(is_prime(n))
            cout << "0\n";
        else {
            int m,s;
            for(int i=n+1; ; i++){
                if(is_prime(i)){
                    m=i;
                    break;
                }
            }
            for(int i=n-1; ; i--){
                if(is_prime(i)){
                    s=i;
                    break;
                }
            }
            cout << m-s << endl;
        }
    }

    return 0;
}
bool is_prime(int p){
    for(int i=2; i*i<=p; i++){
        if(p%i == 0)
            return false;
    }
    return true;
}
