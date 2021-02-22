#include<bits/stdc++.h>
using namespace std;
int b_search(int marbles[],int n,int item){
    for(int i=0; i<n; ++i){
        if(marbles[i]==item)
            return i+1;
    }
    return 0;
}
int main()
{
    int n,q,test=1,que;
    while(cin >> n >> q){
        if(n==0 && q==0)
            break;
        int marbles[n];
        for(int i=0; i<n; ++i){
            cin >> marbles[i];
        }
        sort(marbles,marbles+n);
        cout << "CASE# " << test++ << ":\n";
        for(int i=0; i<q; i++){
            cin >> que;
            int pos=b_search(marbles,n,que);
            if(pos)
                cout << que << " found at " << pos << endl;
            else
                cout << que << " not found\n";
        }

    }

    return 0;
}
