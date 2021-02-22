#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string>

using namespace std;
string solution_verdict(string judge,string contestant){
    string s="";
    bool space=false;
    for(int i=0; i<contestant.size(); ++i){
        if(contestant[i]==' ')
            space=true;
        else
            s+=contestant[i];
    }
    if(s.size()!=judge.size())
        return "Wrong Answer";
    for(int i=0; i<s.size(); ++i){
        if(s[i]!=judge[i]){
            return "Wrong Answer";
        }
    }
    if(space)
        return "Output Format Error";
    else
        return "Yes";
}
int main()
{
    int T,test=1;
    cin >> T;
    getchar();
    while(T--){
        string line1,line2;
        getline(cin,line1);
        getline(cin,line2);
        cout << "Case " << test++ << ": " << solution_verdict(line2,line1) << endl;
    }
    return 0;
}


