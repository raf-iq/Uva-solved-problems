#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        if(n==0)
            break;
        getchar();
        string s;
        int space_count=0,_min_=INT_MAX;
        for(int i=0; i<n; ++i){
            int temp_counter=0;
            getline(cin,s);
            for(int j=0; j<s.size(); ++j){
                if(s[j]==' '){
                    space_count++;
                    temp_counter++;
                }
            }
            _min_=min(_min_,temp_counter);
        }
        cout << space_count-_min_*n << endl;
    }
    return 0;
}

