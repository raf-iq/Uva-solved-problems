#include<bits/stdc++.h>
using namespace std;
int Nine(int nine){
    if(nine==9)
        return 1;
    int nine9=0;
    while(nine){
        nine9+=nine%10;
        nine/=10;
    }
    return 1+Nine(nine9);
}
int main()
{
    string num9;
    while(cin >> num9){
        if(num9=="0")
            break;
        string num=num9;
        int nine=0;
        for(int i=0; i<num.size(); ++i){
            nine+=(num[i]-'0');
        }
        if(nine%9)
            cout << num9 <<  " is not a multiple of 9.\n";
        else {
            int degree9=Nine(nine);
            cout << num9 << " is a multiple of 9 and has 9-degree " << degree9 << "." << endl;
        }
    }
    return 0;
}

