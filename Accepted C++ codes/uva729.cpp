#include<bits/stdc++.h>
#define ll long long int
#define N 66000
using namespace std;
int dp[17][17];
map<string,int>mp;
map<string,int>::iterator it;
struct container{
    string num;
    int dc;
    int in;
}number[N];
int nCr(int n,int r){
    if(n==r)
        return 1;
    if(r==1)
        return n;
    if(dp[n][r]!=-1)
        return dp[n][r];
    dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
    return dp[n][r];
}
void buildBitset(){
    number[0].num="";
    number[0].dc=0;
    number[0].in=0;
    for(int i=1; i<N; ++i){
        int I=i,cnt=0;
        string s="";
        while(I){
            int c=I%2;
            if(c){
                cnt++;
                s+='1';
            }
            else
                s+='0';
            I/=2;
        }
        reverse(s.begin(),s.end());
        ///mp[s]=cnt;
        number[i].num=s;
        number[i].dc=cnt;
        number[i].in=i;
    }
   /* for(it=mp.begin(); it!=mp.end(); ++it){
        cout << "mp string ..>> " << it->first << endl;
        cout << "in map value >> " << it->second << endl;
        system("pause");
    }*/
}
int main()
{
    memset(dp,-1,sizeof(dp));
    buildBitset();
    int T;
    bool line=false;
    cin >> T;
    while(T--){
        int n,r;
        cin >> n >> r;
        if(line)
            cout << endl;
        line=true;
        int h=nCr(n,r),ham=0;
        for(int i=1; i<N; ++i){
            string ss=number[i].num;
            int siz=ss.size();
            if(number[i].dc==r && siz <=n){
                ham++;
                if(siz==n)
                    cout << ss <<endl;
                else {
                    for(int i=0; i<n-siz; ++i)
                        cout << "0";
                    cout << ss << endl;
                }
            }
            if(ham==h){
                break;
            }
        }

    }
    return 0;
}

