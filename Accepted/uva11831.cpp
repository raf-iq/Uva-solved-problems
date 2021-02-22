#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    int n,m,s;
    while(cin >> n >> m >> s){
        if(n==0 && m==0 && s==0)
            break;
        char robotPath[n+2][m+2];
        for(int i=0; i<n+2; ++i){
            for(int j=0; j<m+2; ++j){
                robotPath[i][j]='#';
            }
        }
        int dir,I,J;
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=m; ++j){
                char c;
                cin >> c;
                if(c!='.' && c!='*' && c!='#'){
                    if(c=='N')
                        dir=1;
                    else if(c=='L')
                        dir=2;
                    else if(c=='S')
                        dir=3;
                    else if(c=='O')
                        dir=4;
                    I=i,J=j;
                    robotPath[i][j]='.';
                }
                else {
                    robotPath[i][j]=c;
                }
            }
        }
        int sticker=0;
        string str;
        cin >> str;
        for(int i=0; i<str.size(); ++i){
            if(str[i]=='D'){
                dir++;
                if(dir==5)
                    dir=1;
            }
            else if(str[i]=='E'){
                dir--;
                if(dir==0)
                    dir=4;
            }
            else {
                if(dir==1){
                    if(robotPath[I-1][J]!='#'){
                        if(robotPath[I-1][J]=='*')
                            sticker++;
                        robotPath[I-1][J]='.';
                        I-=1;
                    }
                }
                else if(dir==2){
                    if(robotPath[I][J+1]!='#'){
                        if(robotPath[I][J+1]=='*')
                            sticker++;
                        robotPath[I][J+1]='.';
                        J+=1;
                    }
                }
                else if(dir==3){
                    if(robotPath[I+1][J]!='#'){
                        if(robotPath[I+1][J]=='*')
                            sticker++;
                        robotPath[I+1][J]='.';
                        I+=1;
                    }
                }
                else if(dir==4){
                    if(robotPath[I][J-1]!='#'){
                        if(robotPath[I][J-1]=='*')
                            sticker++;
                        robotPath[I][J-1]='.';
                        J-=1;
                    }
                }
            }
        }
        cout << sticker << endl;
    }
    return 0;
}

