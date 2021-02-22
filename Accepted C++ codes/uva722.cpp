#include<bits/stdc++.h>
#define ll long long int
using namespace std;
char a[103][103];
int ans;
void win(char c,int i,int j){
    if(a[i-1][j]==c){
        a[i][j]='X';
        ans++;
        win(c,i-1,j);
    }
    if(a[i+1][j]==c){
        a[i][j]='X';
        ans++;
        win(c,i+1,j);
    }

    if(a[i][j-1]==c){
        a[i][j]='X';
        ans++;
        win(c,i,j-1);
    }
    if(a[i][j+1]==c){
        a[i][j]='X';
        ans++;
        win(c,i,j+1);
    }
    a[i][j]='X';
}
int main()
{
    int T;
    cin >> T;
    while(T--){
        vector<string> line;
        int I,J;
        cin >> I >> J;
        getchar();
        string s;
        while(getline(cin,s)){
            if(s.size()==0)
                break;
            line.push_back(s);
        }
        int n=line.size();
        int m=line[0].size();
        memset(a,'1',sizeof(a));
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                a[i+1][j+1]=line[i][j];
            }
        }
        ans=1;
        win(a[I][J],I,J);
        cout << ans << endl;
        if(T)
            cout << endl;
    }
    return 0;
}

