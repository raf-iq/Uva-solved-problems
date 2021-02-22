#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n,test=1;
    while(cin>>n){
        if(n==0)
            break;
        map<ll,string> phone;
        ll phone_no[n];
        for(int i=0; i<n; ++i){
            cin >> phone_no[i];
        }
        for(int i=0;i<n; ++i){
            ll phone_temp=phone_no[i];
            ll temp=phone_no[i];
            ll _temp_=phone_no[i];
            phone_temp++;
            while(i<n-1 && phone_no[i+1]==phone_temp){
                    phone_temp++;
                    i++;
            }
            phone_temp--;
            string s1="",s2="";
            while(temp){
                s1+=(char)(temp%10+'0');
                s2+=(char)(phone_temp%10+'0');
                temp/=10;
                phone_temp/=10;
            }
            int ind=0;
            for(ind=s2.size()-1; ind>=0; ind--){
                if(s1[ind]!=s2[ind]){
                    break;
                }
            }
            string lastNo="-";
            for(int i=ind; i>=0; i--){
                lastNo+=s2[i];
            }
            phone[_temp_]=lastNo;
        }
        cout << "Case " << test++ << ":\n";
        for(map<ll,string>::iterator it=phone.begin(); it!=phone.end();++it){
            cout << "0" << it->first ;
            if(it->second !="-" )
                cout << it->second << endl;
            else
                cout << endl;
        }
        cout << endl;

    }
    return 0;
}

