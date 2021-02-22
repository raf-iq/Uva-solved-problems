#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int _toNum(string n){
    int _n=0;
    for(int i=0; i<n.size(); ++i){
        _n=_n*10+(n[i]-'0');
    }
    return _n;
}
int main()
{
    int p,g;
    while(cin >> p >> g){
        map<string,int>ballot;
        string s;
        double d;
        for(int i=0; i<p; ++i){
            cin >> s >> d;
            ballot[s]=int(d*10);
        }
        getchar();
        for(int i=0; i<g; ++i){
            string line;
            getline(cin,line);
            istringstream is(line);
            string ss,n;
            int sum=0.0,ans;
            while(is>>ss){
                if(ss=="=" || ss==">" || ss=="<" || ss==">=" || ss=="<="){
                    is>>n;
                    ans=_toNum(n)*10;
                    break;
                }
                else if(ss!="+"){
                    sum+=ballot[ss];
                }
            }
            cout << "Guess #" << i+1 << " was ";
            if(ss=="=" && sum==ans){
                cout << "correct." << endl;
            }
            else if(ss==">" && sum>ans){
                 cout << "correct." << endl;
            }
            else if(ss=="<" && sum<ans){
                 cout << "correct." << endl;
            }
            else if(ss==">=" && sum>=ans){
                 cout << "correct." << endl;
            }
            else if(ss=="<=" && sum<=ans){
                 cout << "correct." << endl;
            }
            else {
                 cout << "incorrect." << endl;
            }
        }
    }
    return 0;
}

