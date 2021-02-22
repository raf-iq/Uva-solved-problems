#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int __substitute_find(string text,char c){
    for(int i=0; i<text.size(); ++i){
        if(text[i]==c)
            return i;
    }
    return -1;
}
int main()
{
    int T;
    bool newLine=false;
    cin >> T;
    getchar();
    getchar();
    while(T--){
        if(newLine){
            cout << endl;
        }
        newLine=true;
        string plainText,substituteText;
        string cypher;
        getline(cin,plainText);
        getline(cin,substituteText);
        cout << substituteText << endl;
        cout << plainText << endl;
        while(getline(cin,cypher)){
            if(cypher.size()==0)
                break;
            for(int i=0; i<cypher.size(); ++i){
                int indexOfSubstution=__substitute_find(plainText,cypher[i]);
                if(indexOfSubstution!= -1){
                    cout << substituteText[indexOfSubstution];
                }
                else {
                    cout << cypher[i];
                }
            }
            cout << endl;
        }
    }
    return 0;
}

