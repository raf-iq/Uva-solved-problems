#include<bits/stdc++.h>
using namespace std;
class scoreBoard{
public :
    int contestantNo,totalSubmission,panalty;
    bool submitted;
    bool submissionNo[11];
    scoreBoard(){
        contestantNo=0;
        totalSubmission=0;
        panalty=0;
        submitted=false;
        memset(submissionNo,false,sizeof(submissionNo));
    }
};
bool comp(scoreBoard a,scoreBoard b){
    if(a.totalSubmission==b.totalSubmission){
        if(a.panalty==b.panalty){
           return a.contestantNo < b.contestantNo;
        }
        return a.panalty < b.panalty;
    }
    return a.totalSubmission > b.totalSubmission;
}
int stringToNumber(string s){
    int a=0;
    for(int i=0; i<s.size();++i){
        a=a*10+(s[i]-'0');
    }
    return a;
}
int main()
{
    ofstream fout;
    fout.open("Score of contestant.txt");
    bool newLine=false;
    int T;
    cin >> T;
    getchar();
    getchar();
    while(T--){
        if(newLine){
            cout << endl;
            fout << endl;
        }
        newLine=true;
        int inCorectt[103][11];
        memset(inCorectt,0,sizeof(inCorectt));
        scoreBoard correct[103];
        string line;
        while(getline(cin,line)){
            if(line.size()==0)
                break;
            istringstream is(line);
            int c,q,p;
            string value;
            for(int i=1;is>>value; ++i){
                switch(i){
            case 1:
                c=stringToNumber(value);
                break;
            case 2:
                q=stringToNumber(value);
                break;
            case 3:
                p=stringToNumber(value);
                break;
            case 4:
                if(value=="C"){
                    if(correct[c].submissionNo[q]==false){
                    correct[c].contestantNo=c;
                    correct[c].totalSubmission++;
                    correct[c].panalty+=(p+20*inCorectt[c][q]);
                    correct[c].submissionNo[q]=true;
                    correct[c].submitted=true;
                    }
                }
                else if(value=="I"){
                    inCorectt[c][q]++;
                }
                correct[c].contestantNo=c;
                correct[c].submitted=true;

                break;
                }
            }

        }
        sort(correct, correct+102,comp);
        for(int i=0; i<102; ++i){
            if(correct[i].submitted==true){
                cout << correct[i].contestantNo << " " << correct[i].totalSubmission << " " << correct[i].panalty << endl;
                fout << correct[i].contestantNo << " " << correct[i].totalSubmission << " " << correct[i].panalty << endl;
            }
        }
    }
    fout.close();
    return 0;
}

