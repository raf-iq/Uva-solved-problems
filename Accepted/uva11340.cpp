#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--){
        int k,m,p;
        map<char,int>Char;
        string line;
        double paidMoney=0.0;
        char c;
        cin >> k;
        for(int i=0; i<k; ++i){
            cin >> c >> p;
            Char[c]=p;
        }
        cin >> m;
        getchar();
        for(int i=0; i<m; ++i){
            getline(cin,line);
            double money=0;
            for(int i=0; i<line.size(); ++i){
                if(Char.count(line[i])>0)
                    money+=Char[line[i]];
            }
            paidMoney+=money;
        }

        cout << setprecision(2) << fixed << showpoint << paidMoney/100.0  << "$\n";
    }
    return 0;
}

