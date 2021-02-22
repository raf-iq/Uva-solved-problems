#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        getchar();
        if(n==0) break;
        string s;
        cin >> s;
        int g=s.size()/n;
        for(int i=0,I=0; i<n; ++i){
            reverse(s.begin()+I,s.begin()+g+I);
            I+=g;
        }
        cout << s << endl;
    }
    return 0;
}

