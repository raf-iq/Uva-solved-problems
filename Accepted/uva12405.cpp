#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,test=1;
    cin >> T;
    while(T--){
        int n;
        string field;
        cin >> n;
        cin >> field;
        field+='#';
        int scareCrow=0;
        for(int i=0; i<n; i++){
            if(field[i]=='.'){
                scareCrow++;
                field[i]='#';
                field[i+1]='#';
                field[i+2]='#';
            }
        }

        cout << "Case " << test++ << ": " << scareCrow << endl;
    }
    return 0;
}

