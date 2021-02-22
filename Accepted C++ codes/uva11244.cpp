#include<bits/stdc++.h>
#define ll long long int
using namespace std;
char sky[104][105];
bool isStarInTheSky(char c,int i,int j){
    if(sky[i-1][j-1]==c){
     return false;
    }
    if(sky[i-1][j]==c){
     return false;
    }
    if(sky[i-1][j+1]==c){
     return false;
    }
    if(sky[i][j-1]==c){
       return false;
    }
    if(sky[i][j+1]==c){
        return false;
    }
    if(sky[i+1][j-1]==c){
        return false;
    }
    if(sky[i+1][j]==c){
        return false;
    }
    if(sky[i+1][j+1]==c){
        return false;
    }
    return true;
}
int main()
{
    int n,m;
    while(cin >> n >> m){
        if(n==0 && m==0)
            break;
        memset(sky,'.',sizeof(sky));
        int star=0;
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=m; ++j){
                cin >> sky[i][j];
            }
        }
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=m; ++j){
                if(sky[i][j]=='*' && isStarInTheSky('*',i,j)){
                    star++;
                }
            }
        }
        cout << star << endl;
    }
    return 0;
}

