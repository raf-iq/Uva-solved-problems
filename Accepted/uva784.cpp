#include<bits/stdc++.h>
#define ll long long int
using namespace std;
char maze[104][105];
void explorMaze(char c,int i,int j){
    if(maze[i-1][j]==c){
        maze[i][j]='#';
        explorMaze(c,i-1,j);
    }
    if(maze[i][j-1]==c){
        maze[i][j]='#';
        explorMaze(c,i,j-1);
    }
    if(maze[i][j+1]==c){
        maze[i][j]='#';
        explorMaze(c,i,j+1);
    }
    if(maze[i+1][j]==c){
        maze[i][j]='#';
        explorMaze(c,i+1,j);
    }
    maze[i][j]='#';
}
int main()
{
    int T;
    cin >> T;
    getchar();
    while(T--){
        vector<string> line;
        string s;
        while(getline(cin,s)){
            if(s[0]=='_')
                break;
            line.push_back(s);
        }
        int n=line.size();
        int m=line[0].size();
        int I,J;
        memset(maze,'X',sizeof(maze));
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                if(line[i][j]=='*'){
                    I=i+1;
                    J=j+1;
                }
                maze[i+1][j+1]=line[i][j];
            }
        }

        maze[I][J]='#';
        explorMaze(' ',I,J);
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=line[i-1].size(); ++j){
                cout << maze[i][j];
            }
            cout << endl;
        }
        cout << s << endl;
    }
    return 0;
}

