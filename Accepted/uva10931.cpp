#include<bits/stdc++.h>
using namespace std;
int main()
{
    int I;
    while(cin >> I){
        if(I==0)
            break;
        stack<int>st;
        int Ii=I,ones=0;
        while(Ii){
            int i=Ii%2;
            if(i)
                ones++;
            st.push(i);
            Ii/=2;
        }
        cout << "The parity of ";
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
        cout << " is " << ones << " (mod 2).\n";
    }
    return 0;
}
