#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n,test=1;
	while(cin >> n){
		if(n < 0)
		break;
		cout << "Case " << test++ << ": " << ceil(log2(n)) << endl;
	}
    return 0;
}

