#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct BlackBook{
    string title;
    string firstName;
    string lastName;
    string streetAddress;
    string homePhone;
    string workPhone;
    string campusMailBox;
    string department;
};
bool comp(struct BlackBook A,struct BlackBook B){
    return A.lastName < B.lastName;
}
int main()
{
    int n;
    while(cin >> n){
        getchar();
        vector<BlackBook>bk;
        for(int i=0; i<n; ++i){
            string dept;
            getline(cin,dept);
            string detail;
            while(1){
                getline(cin,detail);
                if(detail.size()==0)
                    break;
                BlackBook temp;
                temp.department=dept;
                vector<string>vs;
                string s="";
                for(int j=0; j<detail.size(); ++j){
                    if(detail[j]!=','){
                        s+=detail[j];
                    }
                    else {
                        vs.push_back(s);
                        s="";
                    }
                }
                vs.push_back(s);
                temp.title=vs[0];
                temp.firstName=vs[1];
                temp.lastName=vs[2];
                temp.streetAddress=vs[3];
                temp.homePhone=vs[4];
                temp.workPhone=vs[5];
                temp.campusMailBox=vs[6];
                bk.push_back(temp);
            }
        }
        sort(bk.begin(),bk.end(),comp);
        for(int i=0; i<bk.size(); ++i){
            printf("----------------------------------------\n");
            cout << bk[i].title << " " << bk[i].firstName << " " << bk[i].lastName << endl;
            cout << bk[i].streetAddress << endl;
            cout << "Department: " << bk[i].department << endl;
            cout << "Home Phone: " << bk[i].homePhone << endl;
            cout << "Work Phone: " << bk[i].workPhone << endl;
            cout << "Campus Box: " << bk[i].campusMailBox << endl;
        }
    }
    return 0;
}

