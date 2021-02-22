
#include<bits/stdc++.h>
using namespace std;
class PlayfairCipher{
private:
    string cipherText;
    string key;
    char charSquare[5][5];
public:
    PlayfairCipher(string text){
        cipherText=text;
    }
    void fillCharSquare(){
        set<char>s;
        char a='a';
        for(int  i=0; i<26; ++i){
            s.insert(a++);
        }
        s.erase('q');
        string temp="";
        set<char>::iterator it;
        for(int i=0; i<key.size(); ++i){
            if((it=s.find(key[i]))!=s.end()){
                if(*it != 'q'){
                    temp+=key[i];
                    s.erase(it);
                }
            }
        }
        while(!s.empty()){
            temp+=(*s.begin());
            s.erase(s.begin());
        }
        int k=0;
        for(int i=0; i<5; ++i){
            for(int j=0; j<5; ++j){
                charSquare[i][j]=temp[k++];
            }
        }
        ///showCharSquare();
    }
    void trimWhiteSpace(){
        string temp="";
        for(int i=0; i<cipherText.size(); ++i){
            if(isalpha(cipherText[i]))
            temp+=cipherText[i];
        }
        cipherText=temp;
    }
    void makePair(){
        string temp="";
        int i,j;
        i=j=0;
        while(i<cipherText.size()){
            temp+=cipherText[i];
            i++;
            if(i==cipherText.size()){
                temp+='x';
                break;
            }
            if(temp[j]==cipherText[i]){
                temp+='x';
                j++;
            }
            else if(temp[j]!=cipherText[i]){
                temp+=cipherText[i];
                j++;
                i++;
            }
            j++;
        }
        cipherText=temp;
    }
    pair<int,int> _findChar_(char c){
        for(int i=0; i<5; ++i){
            for(int j=0; j<5; ++j){
                if(charSquare[i][j]==c){
                    return make_pair(i,j);
                }
            }
        }
    }
    int nextChar(int a){
        int b=a%5;
        return  b<0 ? 5+b : b;
    }
    void prepocess(string key){
        this->key=key;
        fillCharSquare();
        trimWhiteSpace();
        makePair();
        lowerCharAll();
    }
    void lowerCharAll(){
        for(int i=0; i<cipherText.size(); ++i){
            cipherText[i]=tolower(cipherText[i]);
        }
    }
    void encode(string key){
        prepocess(key);
        string temp="";
        ///cout << cipherText << endl;
        for(int i=0; i<cipherText.size(); i+=2){
            pair<int,int>p1=_findChar_(cipherText[i]);
            pair<int,int>p2=_findChar_(cipherText[i+1]);
            /// same row
            if(p1.first==p2.first){
                temp+=toupper(charSquare[p1.first][nextChar(p1.second+1)]);
                temp+=toupper(charSquare[p1.first][nextChar(p2.second+1)]);
            }
            /// same column
            else if(p1.second==p2.second){
                temp+=toupper(charSquare[nextChar(p1.first+1)][p1.second]);
                temp+=toupper(charSquare[nextChar(p2.first+1)][p2.second]);
            }
            /// different row-column
            else {
                temp+=toupper(charSquare[p1.first][p2.second]);
                temp+=toupper(charSquare[p2.first][p1.second]);
            }
        }
        //cout << "temp : " << temp << endl;
        cipherText=temp;
    }
    string getCipherText(){
        return cipherText;
    }
    void showCharSquare(){
        for(int i=0; i<5; ++i){
            for(int j=0; j<5; ++j){
                cout << charSquare[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
};

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int T;
    cin >> T;
    getchar();
    while(T--){
        string key,cipher;
        getline(cin,key);
        getline(cin,cipher);
        PlayfairCipher decipher=PlayfairCipher(cipher);
        decipher.encode(key);
        cout << decipher.getCipherText() << endl;
    }
    return 0;
}


