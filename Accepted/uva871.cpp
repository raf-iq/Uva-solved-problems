#include<bits/stdc++.h>
#define ll long long int
using namespace std;
char a[103][103];
int ans;
void blobFilled(char c,int i,int j){
    if(a[i-1][j-1]==c){
        a[i][j]='X';
        ans++;
        blobFilled(c,i-1,j-1);
    }
    if(a[i-1][j]==c){
        a[i][j]='X';
        ans++;
        blobFilled(c,i-1,j);
    }
    if(a[i-1][j+1]==c){
        a[i][j]='X';
        ans++;
        blobFilled(c,i-1,j+1);
    }
    if(a[i][j-1]==c){
        a[i][j]='X';
        ans++;
        blobFilled(c,i,j-1);
    }
    if(a[i][j+1]==c){
        a[i][j]='X';
        ans++;
        blobFilled(c,i,j+1);
    }
    if(a[i+1][j-1]==c){
        a[i][j]='X';
        ans++;
        blobFilled(c,i+1,j-1);
    }
    if(a[i+1][j]==c){
        a[i][j]='X';
        ans++;
        blobFilled(c,i+1,j);
    }
    if(a[i+1][j+1]==c){
        a[i][j]='X';
        ans++;
        blobFilled(c,i+1,j+1);
    }
    a[i][j]='X';
}
int main()
{
    int T;
    cin >> T;
    getchar();
    string s;
    getline(cin,s);
    while(T--){
        vector<string> line;
        string s;
        while(getline(cin,s)){
            if(s.size()==0)
                break;
            line.push_back(s);
        }
        int n=line.size();
        int m=line[0].size();
        memset(a,'X',sizeof(a));
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                a[i+1][j+1]=line[i][j];
            }
        }
        int blob=0;
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=m; ++j){
                if(a[i][j]=='1'){
                    ans=1;
                    blobFilled('1',i,j);
                    blob=max(blob,ans);
                }
            }
        }
        cout << blob << endl;
        if(T)
            cout << endl;
    }
    return 0;
}

