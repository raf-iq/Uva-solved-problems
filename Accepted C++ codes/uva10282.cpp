#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string dicWord;
    map<string,string>dictionary;
    while(1){
        getline(cin,dicWord);
        if(dicWord.size()==0)
            break;
        istringstream is(dicWord);
        string from,to;
        is>>from;
        is>>to;
        dictionary[to]=from;
    }
    while(cin >> dicWord){
        if(dictionary.find(dicWord)!=dictionary.end()){
            cout << dictionary[dicWord] << endl;
        }
        else {
            cout << "eh\n";
        }
    }
    return 0;
}

