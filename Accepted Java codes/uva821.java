


import java.util.*;

 class Main{
        public static int inf= 999;
        public static int page[][];
        public static double avgClick(int n){
            for(int k=1; k<=n; ++k){
                for(int i=1; i<=n; ++i){
                    for(int j=1; j<=n; ++j){
                        page[i][j]=Math.min(page[i][j] , page[i][k]+page[k][j]);
                    }
                }
            }
            double ans=0.0;
            int count=0;
            for(int i=1; i<=n; ++i){
                for(int j=1; j<=n; ++j){
                    if(page[i][j]!=inf){
                        ans+=page[i][j];
                        if(page[i][j]!=0)
                             count++;
                    }
                }
            }
            return ans/count;
        }
        
        public static void main(String[] args){
            Scanner input=new Scanner(System.in);
            page=new int[103][103];
            
            int n=0,test=1;
            int u,v;
            while(true){
                for(int i=0; i<103; ++i){
                     for(int j=0; j<103; ++j){
                         if(i==j)
                             page[i][j]=0;
                         else 
                            page[i][j]=inf;
                     }
                }
                u=input.nextInt();
                v=input.nextInt();
                if(u==0 && v==0)
                    break;
                else {
                    page[u][v]=1;
                    n=Math.max(n,Math.max(u, v));
                    while(true){
                        u=input.nextInt();
                        v=input.nextInt();
                        if(u==0 && v==0)
                            break;
                        else {
                            page[u][v]=1;
                             n=Math.max(n,Math.max(u, v));
                        }
                    }
                    System.out.printf("Case %d: average length between pages = %.3f clicks\n",test++ , avgClick(n));
                    n=0;
                }
            }
            
        }
}