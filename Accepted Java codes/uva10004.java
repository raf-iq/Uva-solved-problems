

import java.util.*;

class Main{
     public static String  isBiColorable(ArrayList adj[],int node ,int s){
             int color[] = new int[node+1];
             for(int i=0; i<node; ++i){
                 color[i]=-1;
             }
            color[s]=1;
            ArrayList<Integer> queue=new ArrayList();
            queue.add(s);
            while(!queue.isEmpty()){
                int u=queue.get(0);
                queue.remove(0);
                Iterator it=adj[u].iterator();
                while(it.hasNext()){
                    int i=(int)it.next();
                    if(color[i]==-1){
                        queue.add(i);
                        color[i]=1-color[u];
                    }
                    else if( color[i]==color[u]){
                        return "NOT BICOLORABLE.";
                    }
                }
            }
            return "BICOLORABLE." ;
        }
        public static void main(String[] args){
            Scanner input=new Scanner(System.in);    
            while(input.hasNext()){
                int node=input.nextInt();
                if(node==0)
                    break;
                ArrayList<Integer>adj[] = new ArrayList [node];
                for(int i=0; i<adj.length; ++i){
                    adj[i]=new ArrayList();
                }
                int edge=input.nextInt();
                for(int i=0; i<edge; ++i){
                    int u=input.nextInt();
                    int v=input.nextInt();
                    adj[u].add(v);
                    adj[v].add(u);
                }
                System.out.println(isBiColorable(adj,node,0));
            }
        }
}