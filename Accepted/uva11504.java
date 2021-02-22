
package testcode;

import java.util.*;

public class Main{
        public static boolean visited[];
        public static ArrayList<Integer> adj[];
        public static Stack<Integer>t_sort;
        public static void handMove(int s){
            visited[s]=true;
            Iterator it=adj[s].iterator();
            while(it.hasNext()){
                int i=(int)it.next();
                if(visited[i]==false){
                    handMove(i);
                }
            }
            t_sort.add(s);
        }
        public static void main(String[] args){
            Scanner input=new Scanner(System.in);    
            int T=input.nextInt();
            while(T!=0){
                T--;
                int node=input.nextInt();
                int edge=input.nextInt();
                adj=new ArrayList [node+2];
                for(int i=0; i<=node; ++i)
                    adj[i]=new ArrayList();
                for(int i=0; i<edge; ++i){
                    int u=input.nextInt();
                    int v=input.nextInt();
                    adj[u].add(v);
                }
                int ssc=0;
                t_sort=new Stack();
                visited=new boolean [node+2];
                for(int i=1; i<=node; ++i){
                    if(!visited[i]){
                        handMove(i);
                        
                    }
                }
              for(int i=1; i<=node; ++i){
                  visited[i]=false;
              }
             
               while(!t_sort.isEmpty()){
                   int i=t_sort.pop();
                    if(visited[i]==false){
                        handMove(i);
                        ssc++;
                    }
                }
                System.out.println(ssc);
            }
        }
}