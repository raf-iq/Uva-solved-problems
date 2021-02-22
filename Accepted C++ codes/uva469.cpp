#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int ans;
int integer(string s){
    int a=0;
    for(int i=0; i<s.size(); ++i){
        a=10*a+s[i]-'0';
    }
    return a;
}
void wetLand(char a[103][103],char c,int i,int j){
    if(a[i-1][j-1]==c){
        a[i][j]='X';
        ans++;
        wetLand(a,c,i-1,j-1);
    }
    if(a[i-1][j]==c){
        a[i][j]='X';
        ans++;
        wetLand(a,c,i-1,j);
    }
    if(a[i-1][j+1]==c){
        a[i][j]='X';
        ans++;
        wetLand(a,c,i-1,j+1);
    }
    if(a[i][j-1]==c){
        a[i][j]='X';
        ans++;
        wetLand(a,c,i,j-1);
    }
    if(a[i][j+1]==c){
        a[i][j]='X';
        ans++;
        wetLand(a,c,i,j+1);
    }
    if(a[i+1][j-1]==c){
        a[i][j]='X';
        ans++;
        wetLand(a,c,i+1,j-1);
    }
    if(a[i+1][j]==c){
        a[i][j]='X';
        ans++;
        wetLand(a,c,i+1,j);
    }
    if(a[i+1][j+1]==c){
        a[i][j]='X';
        ans++;
        wetLand(a,c,i+1,j+1);
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
            if(s[0]!='L' && s[0]!='W')
                break;
            line.push_back(s);
        }
        int n=line.size();
        int m=line[0].size();
        char a[103][103];
        memset(a,'X',sizeof(a));
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                a[i+1][j+1]=line[i][j];
            }
        }
        char aa[103][103];
        memcpy(aa,a,sizeof(aa));
        string num;
        istringstream is(s);
        is >> num;
        int I=integer(num);
        is >> num;
        int J=integer(num);
        ans=1;
        wetLand(aa,a[I][J],I,J);
        cout << ans << endl;
        while(getline(cin,s)){
            if(s.size()==0)
                break;
            istringstream is(s);
            is >> num;
            I=integer(num);
            is >> num;
            J=integer(num);
            ans=1;
            memcpy(aa,a,sizeof(aa));
            wetLand(aa,a[I][J],I,J);
            cout << ans << endl;
        }
        if(T)
            cout << endl;
    }
    return 0;
}

