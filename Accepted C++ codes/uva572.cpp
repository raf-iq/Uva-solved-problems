#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int field[105][105];
void deposit(int i,int j){

    if(field[i-1][j]==1){
        field[i-1][j]=0;
        deposit(i-1,j);
    }
    if(field[i-1][j-1]==1){
        field[i-1][j-1]=0;
        deposit(i-1,j-1);
    }
    if(field[i-1][j+1]==1){
        field[i-1][j+1]=0;
        deposit(i-1,j+1);
    }
    if(field[i][j-1]==1){
        field[i][j-1]=0;
        deposit(i,j-1);
    }
    if(field[i][j+1]==1){
        field[i][j+1]=0;
        deposit(i,j+1);
    }
    if(field[i+1][j-1]==1){
        field[i+1][j-1]=0;
        deposit(i+1,j-1);
    }
    if(field[i+1][j+1]==1){
        field[i+1][j+1]=0;
        deposit(i+1,j+1);
    }
    if(field[i+1][j]==1){
        field[i+1][j]=0;
        deposit(i+1,j);
    }

}
int main()
{
    int m,n;
    while(cin >> m >> n){
        if(m==0 && n==0)
            break;

        memset(field,0,sizeof(field));
        char c;
        for(int i=1; i<=m; ++i){
            for(int j=1; j<=n; ++j){
                cin >> c;
                if(c=='@')
                    field[i][j]=1;
            }
        }
        int oil_deposit=0;
        for(int i=1; i<=m; ++i){
            for(int j=1; j<=n; ++j){
                if(field[i][j]==1){
                    field[i][j]=0;
                    deposit(i,j);
                    oil_deposit++;
                }
            }
        }
        cout << oil_deposit << endl;
    }
    return 0;
}

