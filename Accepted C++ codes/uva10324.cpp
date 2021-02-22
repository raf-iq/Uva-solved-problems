#include<bits/stdc++.h>
#define ll long long int

using namespace std;
void update(int a[],int n,int index,int val){
    index++;
    while(index<=n){
        a[index]+=val;
        index=index+(index&(-index));
    }
}
int sum(int a[],int index){
    index++;
    int summ=0;
    while(index>0){
        summ+=a[index];
        index=index-(index&(-index));
    }
    return summ;
}
void build(int a[],string s){
    int n=s.size();
    for(int i=0; i<n; ++i){
        update(a,n,i,s[i]-'0');
    }
}
int main()
{
    string num;
    int test=1;
    while(getline(cin,num)){
        if(num.size()==0)
            break;
        int BIT[num.size()+1];
        memset(BIT,0,sizeof(BIT));
        build(BIT,num);
        int n;
        cin >> n;
        cout << "Case " << test++ << ":" << endl ;
        for(int i=0; i<n; ++i){
            int I,J;
            cin >> I >> J;
            int zero=sum(BIT,J)-sum(BIT,I-1);
            if(!zero || zero==(J-I+1))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        getline(cin,num);
    }
    return 0;
}

