#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        int n,m;
        cin >> n >> m;
        getchar();
        char maze[n+2][m+2];
        memset(maze,'*',sizeof(maze));
        for(int i=1; i<=n; ++i){
            string s;
            getline(cin,s);
            for(int j=0; j<s.size(); ++j){
                if(s[j]==' ')
                    maze[i][j+1]='.';
                else
                    maze[i][j+1]=s[j];
            }
        }
        int I,J;
        char dir='N';
        cin >> I >> J;
        char c;
        while(cin >> c){
            if(c=='Q')
                break;
            if(c=='L'){
                switch(dir){
                    case 'N': dir='W'; break;
                    case 'E': dir='N'; break;
                    case 'S': dir='E'; break;
                    case 'W': dir='S'; break;
                }
            }
            else if(c=='R'){
                switch(dir){
                    case 'N': dir='E'; break;
                    case 'E': dir='S'; break;
                    case 'S': dir='W'; break;
                    case 'W': dir='N'; break;
                }
            }
            else if(c=='F'){
                if(dir=='N' && maze[I-1][J]=='.'){
                    I=I-1;
                }
                else if(dir=='E' && maze[I][J+1]=='.'){
                    J=J+1;
                }
                else if(dir=='S' && maze[I+1][J]=='.'){
                    I=I+1;
                }
                else if(dir=='W' && maze[I][J-1]=='.'){
                    J=J-1;
                }
            }
        }
        cout << I << " " << J << " " << dir << endl;
        if(T){
            cout << endl;
        }
    }
    return 0;
}

