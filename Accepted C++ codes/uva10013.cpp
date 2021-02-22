#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ///ofstream fout("Big number.txt");
    int T;
    cin >> T;
    while(T--){
        int m;
        cin >> m;
        vector<pair<int,int>>num;
        for(int i=0; i<m; ++i){
            int a,b;
            cin >> a >> b;
            num.push_back(make_pair(a,b));
        }
        int temp=0;
        string number="";
        for(int i=num.size()-1; i>=0; --i){
            int sum=temp+num[i].first+num[i].second;
            number+=(sum%10)+'0';
            temp=sum/10;
        }
        while(temp){
            number+=(temp%10)+'0';
            temp/=10;
        }
        for(int i=number.size()-1; i>=0; --i){
            cout << number[i];
            ///fout << number[i];
        }
        cout << endl;
        ///fout << endl;
        if(T){
            cout << endl;
            ///fout << endl;
        }
    }
    return 0;
}

