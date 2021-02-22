#include<bits/stdc++.h>
#define ll long long int

using namespace std;
vector<int>sequence;
int NOD(int n){
    int d=2;
    int sq=sqrt(n);
    for(int i=2; i<=sq; i++){
        if(n%i==0){
            d+=2;
        }
    }
    if(sq*sq==n)
        return d-1;
    return d;
}
void _function_(){
    sequence.push_back(1);
    for(int i=0; sequence[i] <=1000000; i++){
        sequence.push_back(sequence[i]+NOD(sequence[i]));
    }
}
int a_search(int n){
    int b=0,e=sequence.size()-1,ind=0;
    while(b<=e){
        int m=(b+e)/2;
        if(sequence[m]==n){
            return m;
        }
        else if(sequence[m]<n){
            b=m+1;
            ind=b;
        }
        else{
            e=m-1;
        }
    }
    return ind;
}
int b_search(int n){
    int b=0,e=sequence.size()-1,ind=0;
    while(b<=e){
        int m=(b+e)/2;
        if(sequence[m]==n){
            return m;
        }
        else if(sequence[m]<n){
            b=m+1;
        }
        else{
            e=m-1;
            ind=e;
        }
    }
    return ind;
}

int main()
{
    _function_();

    int T,test=1;
    cin >> T;
    while(T--){
        int A,B;
        cin >> A >> B;
        cout << "Case " << test++ << ": " << b_search(B)-a_search(A)+1 << endl;
    }
    return 0;
}

