#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int T,right=1,left=-1;
    cin >> T;
    while(T--){
        string _move_;
        int moveType[103],moveNo,finalPosition=0,samePos;
        memset(moveType,0,sizeof(moveType));
        cin >> moveNo;
        for(int i=1; i<=moveNo; ++i){
            cin >> _move_;
            if(_move_=="RIGHT"){
                finalPosition+=right;
                moveType[i]=right;
            }
            else if(_move_=="LEFT"){
                finalPosition+=left;
                moveType[i]=left;
            }
            else {
                cin >> _move_ >> samePos;
                finalPosition+=moveType[samePos];
                moveType[i]=moveType[samePos];
            }
        }
        cout << finalPosition << endl;
    }
    return 0;
}

