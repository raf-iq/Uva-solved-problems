#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct Map{
    string compName;
    int L,H;
};
int _find_car_company(Map car[],int D,int p){
    int counter=0,lok;
    for(int i=0; i<D; ++i){
        if(car[i].L <=p && car[i].H >=p){
            counter++;
            lok=i;
        }
        if(counter==2)
            break;
    }
    if(counter == 1){
        return lok;
    }
    else
        return -1;
}
int main()
{
    bool line=false;
    int T;
    cin >> T;
    while(T--){
        if(line)
            cout <<  endl;
        line=true;
        int D,Q,P;
        cin >> D;
        Map car[D];
        string name;
        int l,h;
        for(int i=0; i<D; ++i){
            cin >> name >> l >> h;
            car[i].compName=name;
            car[i].L=l;
            car[i].H=h;
        }
        cin >> Q;
        for(int i=0; i<Q; ++i){
            cin >> P;
            int expert=_find_car_company(car,D,P);
            if(expert==-1){
                cout << "UNDETERMINED\n";
            }
            else {
                cout << car[expert].compName << endl;
            }
        }
    }
    return 0;
}

