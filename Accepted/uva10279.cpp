#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        char mined[n+2][n+2],moved[n+2][n+2];
        memset(mined,'.',sizeof(mined));
        memset(moved,'.',sizeof(moved));
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=n; ++j){
                cin >> mined[i][j];
            }
        }
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=n; ++j){
                cin >> moved[i][j];
            }
        }
        int i,j;
        bool touchMine=false;
        for(i=1; i<=n; ++i){
            for(j=1; j<=n; ++j){
                if(moved[i][j]=='x' && mined[i][j]=='*'){
                    touchMine=true;
                }
                else if(moved[i][j]=='x' && mined[i][j]=='.'){
                    int c=0;
                    if(mined[i-1][j-1]=='*')
                        c++;
                    if(mined[i-1][j]=='*')
                        c++;
                    if(mined[i-1][j+1]=='*')
                        c++;
                    if(mined[i][j-1]=='*')
                        c++;
                    if(mined[i][j+1]=='*')
                        c++;
                    if(mined[i+1][j-1]=='*')
                        c++;
                    if(mined[i+1][j]=='*')
                        c++;
                    if(mined[i+1][j+1]=='*')
                        c++;
                    moved[i][j]=c+'0';
                }
            }
        }

        for(int l=1; l<=n; ++l){
            for(int k=1; k<=n; ++k){
                if(mined[l][k]=='*' && touchMine)
                    cout << '*';
                else
                    cout << moved[l][k];
            }
            cout << endl;
        }
        if(T)
            cout << endl;
    }
    return 0;
}

