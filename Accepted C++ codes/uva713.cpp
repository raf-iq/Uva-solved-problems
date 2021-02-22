#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void reverseNumber(string &s){
    int c=0;
    for(int i=s.size()-1; i>=0; --i){
        if(s[i]!='0'){
            c=i+1;
            break;
        }
    }
    s.erase(c,string::npos);
    reverse(s.begin(),s.end());
}
string addition(string n1,string n2){
    string sum="";
    int carry=0;
    if(n1.size() < n2.size())
            swap(n1,n2);
    int i,j;
    for(i=n1.size()-1,j=n2.size()-1; i>=0 && j>=0 ; --i,j--){
        int cry=n1[i]+n2[j]+carry-96;
        sum+=(cry%10)+'0';
        carry=cry/10;
    }
    while(carry && i>=0){
        int cry=n1[i]+carry-'0';
        sum+=(cry%10)+'0';
        carry=cry/10;
        i--;
    }
    if(carry){
        sum+='1';
    }
    while(i>=0){
        sum+=n1[i];
        i--;
    }
    return sum;
}
int main()
{
    int T;
    cin >> T;
    while(T--){
        string firstNumber,secondNumber;
        cin >> firstNumber >> secondNumber;
        reverseNumber(firstNumber);
        reverseNumber(secondNumber);
        string answer=addition(firstNumber,secondNumber);
        int c=0;
        for(int i=0; i<answer.size(); ++i){
            if(answer[i]!='0'){
                c=i;
                break;
            }
        }
        for(int i=c; i<answer.size(); ++i){
            cout << answer[i];
        }
        cout << endl;
    }
    return 0;
}

