#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int N,test=1;
    while(cin >> N){
        if(N==0)
            break;
        int ip;
        int given_treat=0,have_to_given=0;
        for(int i=0; i<N; ++i){
            cin >> ip;
            if(ip==0){
                given_treat++;
            }
            else
                have_to_given++;
        }
        cout << "Case " << test++ << ": " << have_to_given - given_treat << endl;
    }
    return 0;
}

