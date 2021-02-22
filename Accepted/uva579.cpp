#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    double h,m;
    while(scanf("%lf%*c%lf",&h,&m)!=EOF){
        if(h==0 && m==0)
            break;
        h=h*30+m*0.5;
        m=m*6;
        double clock=abs(h-m);
        clock=min(clock,360-clock);
        printf("%.3f\n",clock);
    }
    return 0;
}

