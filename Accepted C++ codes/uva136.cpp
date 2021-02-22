#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ugly=1;
    set<long long int>un;
    un.insert(1);
    while(ugly!=1500){
        long long int u=*un.begin();
        un.erase(u);
        un.insert(u*2);
        un.insert(u*3);
        un.insert(u*5);
        ugly++;
    }
    cout << "The 1500'th ugly number is " << *un.begin() << "." <<endl;
    return 0;
}
