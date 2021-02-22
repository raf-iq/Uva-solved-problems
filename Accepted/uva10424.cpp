#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>value;
    for(int i=0; i<26; ++i)
        value['a'+i]=i+1;
    string boyName,girlName;
    while(getline(cin,boyName)){
        getline(cin,girlName);
        int boy=0,girl=0;
        for(int i=0; i<boyName.size(); ++i){
            if((boyName[i] >= 'a' && boyName[i] <= 'z') || (boyName[i] >= 'A' && boyName[i] <= 'Z'))
                boy+=value[tolower(boyName[i])];
        }
        for(int i=0; i<girlName.size(); ++i){
            if((girlName[i] >= 'a' && girlName[i] <= 'z') || (girlName[i] >= 'A' && girlName[i] <= 'Z'))
                girl+=value[tolower(girlName[i])];
        }
        while(boy > 9){
            int b=boy;
            boy=0;
            while(b){
                boy+=b%10;
                b/=10;
            }
        }
        while(girl > 9){
            int g=girl;
            girl=0;
            while(g){
                girl+=g%10;
                g/=10;
            }
        }
        if(boy > girl)
            cout << setprecision(2) << fixed << showpoint << ((double)girl/boy)*100 << " %\n";
        else
            cout << setprecision(2) << fixed << showpoint << ((double)boy/girl)*100 << " %\n";

    }
    return 0;
}
