#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int __mol__(string mol,int i){
    if(mol[i]>='1' && mol[i]<='9'){
        if(mol[i+1]>='1' && mol[i+1]<='9'){
            return (mol[i]-'0')*10+(mol[i+1]-'0');
        }
        else
            return mol[i]-'0';
    }
    else
        return 1;
}
int main()
{
    double atom_mass[]={12.010,1.008,16.000,14.010};
    int T;
    cin >> T;
    while(T--){
        string mole;
        cin >> mole;
        double mass=0.0;
        for(int i=0; i<mole.size(); ++i){
            if(mole[i]=='C'){
                int _mol=__mol__(mole,i+1);
                mass+=atom_mass[0]*_mol;
            }else if(mole[i]=='H'){
                int  _mol=__mol__(mole,i+1);
                mass+=atom_mass[1]*_mol;
            }else if(mole[i]=='O'){
                int  _mol=__mol__(mole,i+1);
                mass+=atom_mass[2]*_mol;
            }else if(mole[i]=='N'){
                int _mol=__mol__(mole,i+1);
                mass+=atom_mass[3]*_mol;
            }
        }
        cout << setprecision(3) << fixed << showpoint << mass << endl;
    }
    return 0;
}

