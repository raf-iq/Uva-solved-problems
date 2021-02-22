#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int T,k=0,n;
    char op[10];
    scanf("%d",&T);
    while(T--){
        scanf("%s",&op);
        if(op[0]=='d'){
            scanf("%d",&n);
            k+=n;
        }
        else {
            printf("%d\n",k);
        }
    }
    return 0;
}

